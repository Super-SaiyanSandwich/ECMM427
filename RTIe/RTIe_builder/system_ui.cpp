#include "system_ui.h"
#include "image_Management_Nui.h"
#include "splash_Screen.h"
#include "ui_system_ui.h"
#include "project_Wizard.h"
#include "image_Gatherer.h"
#include "splash_Screen.h"
#define dumpval(x) qDebug()<<#x<<'='<<x

#include <QTranslator>
#include <QFileDialog>
#include <QDebug>
#include <QPixmap>
#include <QListWidgetItem>
#include <QFile>
#include <QFileDialog>
#include <QLabel>
#include <QLineEdit>
#include <QObject>
#include <QTextBrowser>
#include <QTableWidget>
#include <QDateTime>
#include <QProcess>
#include <QProgressBar>

#include <tuple>
#include <vector>
#include <math.h>
#define _USE_MATH_DEFINES



#include <QApplication>
#include <QtWidgets>
#include <QTranslator>
#include <QLocale>
#include <QLibraryInfo>
#include <QComboBox>

#include <QApplication>
#include <QtWidgets>
#include <QTranslator>
#include <QLocale>
#include <QLibraryInfo>
#include <iostream>
#include <fstream>
#include <exception>

#include <QBasicTimer>
#include <QList>
#include <QImage>
#include <QDir>
#include <QPainter>
#include <QPaintEvent>

#include <QThread>
#include <QGraphicsPixmapItem>
#include <QGraphicsItem>


using namespace std;

// CONSTANT VALUES
#define CENTER_SCALE_FACTOR 0.3
#define SCROLL_AREA_HEIGHT 694.0
#define SCROLL_AREA_WIDTH 1044.0
#define CONTRAST_PIVOT_POINT 215
#define CONTRAST_SCALE 2
#define BORDER_SCALE_FACTOR 0.1


system_Ui::system_Ui(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::system_Ui)
{

    ui->setupUi(this);





    ui->image_Label_3->setPixmap(QPixmap::fromImage(QImage(this->get_File_List().value(0))));


}

system_Ui::~system_Ui()
{
    delete ui;
}

void system_Ui::open_Selected_Project()//IMPORTANT FUNCTION
{

    QFileDialog dialog(this);
    dialog.setFileMode(QFileDialog::ExistingFile);

    if(dialog.exec()){
        QFile project_File(dialog.selectedFiles().at(0).toLocal8Bit().constData());

        if (project_File.open(QIODevice::ReadOnly))
        {
            QTextStream in(&project_File);
            splashScreen::project_Path = in.readLine();
            project_File.close();
        }

    }

    qInfo() << "test OPEN PATH:: " << splashScreen::project_Path;

    system_Ui::start();


}

void system_Ui::start()
{
    system_Ui *home = new system_Ui();
    home->showMaximized();
}








//==================================== Page change buttons  ===============================

void system_Ui::on_marble_Detection_Btn_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
    //*marble_Detection *md = new*/ marble_Detection(this, ui->work_Images->item(0)->text());
}

void system_Ui::on_remove_Marble_Btn_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

void system_Ui::on_export_Btn_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}

void system_Ui::on_image_Management_Btn_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void system_Ui::on_remove_Marble_Btn_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

void system_Ui::on_export_Btn_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}

void system_Ui::on_image_Management_Btn_3_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void system_Ui::on_marble_Detection_Btn_3_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void system_Ui::on_export_Btn_3_clicked()
{
     ui->stackedWidget->setCurrentIndex(3);
}

void system_Ui::on_image_Management_Btn_4_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void system_Ui::on_marble_Detection_Btn_4_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void system_Ui::on_remove_Marble_Btn_4_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}


//======================================== FITTERS PAGE ================================
/// Runs the selected fitter program on the images in the {@link CropExecuteLayout#lpImagesGrid} by creating a new
/// LP file for them, cropping them if the crop is selected, and running the fitter using the new LP file. Prints
/// the output of th e fitter to the {@link CropExecuteLayout#fitterOutputArea}.Deals with all errors that
/// could occur in this method through the use of an error dialog.



void system_Ui::on_generate_Btn_clicked()
{
     QString ptm_Option = ui->ptm_Luminance->currentText(); // check t+he current luminance option selected e.g {rgb / lrgb}
     QString hsh_Option = ui->hsh_Order->currentText();


    if(ui->ptm_Fitter->isChecked()){


        if(ptm_Option == "RGB"){  // add the selected luminace as an argument
            fitter_Args += " -f 0 ";
        }
        else if(ptm_Option == "LRGB"){
            fitter_Args += " -f 1 ";
        }

        if (ptm_Option != "" && fitter_Args.size() == 3 && ui->temp->text() != "" && ui->fitter_Placeholder->text() != "" && ui->output_Placeholder->text()!=""){ // make sure that all the necessary arguments are present
            /* the ptm fitter has command-line args of :
                    <fitter location> -i <lp file location> -o <destination filepath> -f <rgb / lrgb>
            */
            ui->status->setText("Loading...");
            ui->generate_Btn->setDisabled(true);
            fitter_Location += fitter_Args.join(" ");   // entire command line executable with the arguments


            try {
                //run the executable with the command-line arguments
                QProcess *process = new QProcess(this);

                ui->progress_Bar->setMaximum(100);
                ui->progress_Bar->setMinimum(0);

                connect (process, SIGNAL(readyReadStandardOutput()), this, SLOT(result()));
                process->start(fitter_Location);


                if (process->waitForFinished(-1)){
                    // will wait forever until finished
                    ui->progress_Bar->setValue(100);
                    ui->status->setText("Finished...");

                    std_Output = process->readAllStandardOutput();
                    std_Error = process->readAllStandardError();
                    ui->fitter_Info->setText("Worked Sucessfully\n------------------\n"+std_Output);;
                    ui->generate_Btn->setDisabled(true);
                }



            }catch (exception e){

                ui->fitter_Info->setText("Failed to Work\n------------------\n"+std_Error);

            }
        }
        else{
                /*
                 * A summary is given containing all images that have been confirmed to be
                 * deleted as well as those that have confirmed to be cancelled.
                 */
               QString message = error_Message(false);

                QMessageBox Error_Summary;
                Error_Summary.setText("PTM Fitter Error");
                Error_Summary.setInformativeText(message);
                Error_Summary.setStandardButtons(QMessageBox::Ok);
                Error_Summary.setDefaultButton(QMessageBox::Ok);
                Error_Summary.exec();
            }
    }

    else if(ui->hsh_Fitter->isChecked()){
        // Clear all the fields.


        QString hsh_Option = ui->hsh_Order->currentText(); // check the current luminance option selected e.g {rgb / lrgb}

        if ( lp_Path != "" && output_Path != "" && hsh_Option != ""){
            //&& ui->temp->text() !="" && ui->fitter_Placeholder->text() !="" && ui->output_Placeholder->text()!="" && ui->hsh_Order->currentText() != ""
            /* the hsh has command-line args of :
                            <fitter location> <lp file location> <HSH order> <destination filepath>
            */



            fitter_Location += " "+ lp_Path + hsh_Option +" " + output_Path; // entire command line executablle with the arguments
            try {
                //run the executable with the command-line arguments
                qInfo()<<fitter_Location;

            QProcess *process = new QProcess(this);
            ui->progress_Bar->reset();
            ui->progress_Bar->setMaximum(100);
            ui->progress_Bar->setMinimum(0);

            connect (process, SIGNAL(readyReadStandardOutput()), this, SLOT(result()));
            process->start(fitter_Location);

            if (process->waitForFinished(-1)){
                // will wait forever until finished
                ui->progress_Bar->setValue(100);
                ui->status->setText("Finished...");

                std_Output = process->readAllStandardOutput();
                std_Error = process->readAllStandardError();
                ui->fitter_Info->setText("Worked Sucessfully\n------------------\n"+std_Output);;
                ui->generate_Btn->setDisabled(true);
            }



            }catch (exception e){
                ui->fitter_Info->setText("Failed to Work\n------------------\n"+std_Error);

            }

        }
        else{
            /*
             * A summary is given containing all images that have been confirmed to be
             * deleted as well as those that have confirmed to be cancelled.
             */
            QString message = error_Message(true);

            QMessageBox Error_Summary;
            Error_Summary.setText("HSH Fitter Error");
            Error_Summary.setInformativeText(message);
            Error_Summary.setStandardButtons(QMessageBox::Ok);
            Error_Summary.setDefaultButton(QMessageBox::Ok);
            Error_Summary.exec();

        }
    }


}

void system_Ui::result()
{
//    while(-1){
//       QString t = process->readLine();
//       if( t.isEmpty() ) break;
      ui->progress_Bar->setValue( ui->progress_Bar->value()+1);
//   }
}

QString system_Ui:: error_Message(bool hsh)
{
    empty_LP = "Light Position directory";
    empty_Fitter = "Fitter directory";
    empty_Output = "Output file directory";
    if (hsh){
        dropdown_Option = ui->hsh_Order->currentText() == "" ;
        empty_Order = "Hsh Order";
        fitter = ".hsh";

    }
    else {
        dropdown_Option = ui->ptm_Luminance->currentText() == "" ;
        empty_Order = "PTM Luminance";
        fitter = ".ptm";

    }


    if (ui->temp->text() =="" && ui->fitter_Placeholder->text() =="" && ui->output_Placeholder->text()=="" && dropdown_Option){
        summary = "The following fields were empty: \n - " +  empty_LP + "\n - " + empty_Fitter + "\n - " + empty_Output  + "\n - " + empty_Order +"\nPlease fill them in and then generate your output"+ fitter +" file";
    }

    else if (ui->temp->text() =="" && ui->fitter_Placeholder->text() =="" && dropdown_Option ){
        summary = "The following fields were empty:\n - " +  empty_LP + "\n - " + empty_Fitter  + "\n - " + empty_Order + "\n Please fill them in and then generate your output"+ fitter +" file";
    }

    else if (ui->temp->text() =="" && ui->fitter_Placeholder->text() =="" && ui->output_Placeholder->text() == "" ){
        summary = "The following fields were empty:\n - " +  empty_LP + "\n - " + empty_Fitter  + "\n - " + empty_Output + "\n Please fill them in and then generate your output"+ fitter +" file";
    }

    else if (ui->temp->text() ==""  && ui->output_Placeholder->text()=="" && dropdown_Option){
        summary = "The following fields were empty: \n - " +  empty_LP + "\n - " + empty_Output  + "\n - " + empty_Order + "\nPlease fill them in and then generate your output"+ fitter +" file";
    }

    else if ( ui->fitter_Placeholder->text() =="" && ui->output_Placeholder->text()=="" && dropdown_Option){
        summary = "The following fields were empty: \n - " +  empty_Fitter + "\n - " + empty_Output  + "\n - " + empty_Order + "\nPlease fill them in and then generate your output"+ fitter +" file";
    }

    else if ( ui->fitter_Placeholder->text() =="" && ui->output_Placeholder->text()=="" && ui->temp->text() == ""){
        summary = "The following fields were empty: \n - " + empty_LP  + "\n - " + empty_Fitter   + "\n - " + empty_Output  + "\nPlease fill them in and then generate your output"+ fitter +" file";
    }



    else if (ui->temp->text() =="" && ui->fitter_Placeholder->text() =="" ){
        summary = "The following fields were empty:\n - " +  empty_LP + "\n - " + empty_Fitter  + "\n Please fill them in and then generate your "+ fitter +" file";
    }

    else if (ui->temp->text() ==""  && dropdown_Option){
        summary = "The following fields were empty: \n - " +  empty_LP + "\n - " + empty_Order + "\nPlease fill them in and then generate your "+ fitter +" file";
    }

    else if ( ui->output_Placeholder->text()=="" && ui->temp->text() == ""){
        summary = "The following fields were empty: \n - " + empty_LP   + "\n - " + empty_Output  + "\nPlease fill them in and then generate your "+ fitter +" file";
    }


    else if ( ui->fitter_Placeholder->text() =="" && ui->output_Placeholder->text()==""){
        summary = "The following fields were empty: \n - " +  empty_Fitter + "\n - " + empty_Output  + "\nPlease fill them in and then generate your "+ fitter +" file";
    }


    else if ( ui->fitter_Placeholder->text() =="" && dropdown_Option){
        summary = "The following fields were empty: \n - " + empty_Fitter + "\n - " + empty_Order +"\nPlease fill them in and then generate your "+ fitter +" file";
    }


    else if ( ui->output_Placeholder->text()=="" && dropdown_Option){
        summary = "The following fields were empty: \n - " + empty_Output  + "\n - " + empty_Order  + "\nPlease fill them in and then generate your "+ fitter +" file";
    }



    else if (ui->temp->text() ==""){
        summary = "The following fields were empty: \n - " +  empty_LP + "\nPlease fill them in and then generate your "+ fitter +" file";
    }

    else if ( ui->fitter_Placeholder->text() =="" ){
        summary = "The following fields were empty: \n - " +  empty_Fitter + "\nPlease fill them in and then generate your "+ fitter +" file";
    }

    else if (ui->output_Placeholder->text()==""){
        summary = "The following fields were empty: \n - " +  empty_Output + "\nPlease fill them in and then generate your "+ fitter +" file";
    }
    else if (dropdown_Option){
        summary = "The following fields were empty: \n - " +  empty_Order + "\nPlease fill them in and then generate your "+ fitter +" file";
    }

    return summary;
}

void system_Ui::on_cancel_fitter_Btn_clicked()
{
    ui->progress_Bar->reset();
    ui->status->setText("");
    ui->fitter_Info->clear();
    ui->temp->clear();
    ui->fitter_Placeholder->clear();
    ui->output_Placeholder->clear();
    //********************************
    ui->ptm_Fitter->setChecked(false);
    ui->hsh_Fitter->setChecked(false);
    //********************************
    ui->hsh_Order->setDisabled(true);
    ui->ptm_Luminance->setDisabled(true);
    ui->generate_Btn->setEnabled(true);

}

void system_Ui::on_fitter_Location_clicked()
{
    QFileDialog dialog(this);

    QString filter_2 = "fitter(*.exe)";     //(ptm or hsh)


    fitter_Location = dialog.getOpenFileName(this, tr("Open File"),
                                                    "",
                                                    filter_2);

    ui->fitter_Placeholder->setText(fitter_Location);


}

void system_Ui::on_lp_Location_clicked()
{
        QFileDialog dialog(this);

        QString filter = "lp(*.lp)";


        QString fileName = dialog.getOpenFileName(this, tr("Open File"),
                                                        "",
                                                        filter);

        ui->temp->setText(fileName);
        if(ui->ptm_Fitter->isChecked()){
            fitter_Args += " -i " + fileName +" ";
        }else{
            lp_Path += fileName +" ";
        }


}

void system_Ui::on_output_Location_clicked()
{
    QFileDialog dialog(this);
    dialog.setFileMode(QFileDialog::ExistingFile);
    dialog.setOption(QFileDialog::ShowDirsOnly);
    QString output_Filename = "/output";

    // Stores the path of the user's choice.
    chosen_Location = dialog.getExistingDirectory() + output_Filename;

    if(ui->ptm_Fitter->isChecked()){
        chosen_Location+= ".ptm";
        fitter_Args += " -o " + chosen_Location + " ";
    }else{
        chosen_Location+= ".hsh";
        output_Path += chosen_Location + " ";
    }
    ui->output_Placeholder->setText(chosen_Location);
}

void system_Ui::on_resize_Checkbox_clicked()
{
    //TODO = RESIZE IMAGE
    ui->width_Measurement->setEnabled(true);
    ui->height_Measurement->setEnabled(true);
}

void system_Ui::on_ptm_Fitter_clicked()
{
    ui->hsh_Order->setDisabled(true);
    ui->ptm_Luminance->setEnabled(true);
    ui->generate_Btn->setEnabled(true);
    //*********************************
    ui->fitter_Info->clear();
    ui->temp->clear();
    ui->fitter_Placeholder->clear();
    ui->output_Placeholder->clear();
    ui->hsh_Order->setCurrentText("");
    ui->ptm_Luminance->setCurrentText("");

}

void system_Ui::on_hsh_Fitter_clicked()
{
    ui->hsh_Order->setEnabled(true);
    ui->ptm_Luminance->setDisabled(true);
    ui->fitter_Info->clear();
    ui->generate_Btn->setEnabled(true);

    //***********************************
    ui->fitter_Info->clear();
    ui->temp->clear();
    ui->fitter_Placeholder->clear();
    ui->output_Placeholder->clear();
    ui->hsh_Order->setCurrentText("");
    ui->ptm_Luminance->setCurrentText("");
}

QStringList system_Ui:: get_File_List()
{
    QStringList path_List = image_Management_Nui::get_Working_Image_Paths();//*splashScreen::project_Path
    QStringListIterator file_Iterator(path_List);
    QStringList file_Names;
    while (file_Iterator.hasNext())
    {
        QString path = file_Iterator.next().toLocal8Bit().constData(); //Path Location
        QString file_Name(path);
        file_Names.append(file_Name);

    }

    return file_Names;
}

void system_Ui::on_previous_Image_Btn_clicked()
{
    QStringList image_Paths = get_File_List();
    ui->image_Label_3->clear();
    ui->image_Name->clear();

    current_Slide--;

    if (current_Slide < 0)
        current_Slide = image_Paths.size()-1;


    QImage image = QImage(this->get_File_List().value(current_Slide));

    ui->image_Label_3->setPixmap(QPixmap::fromImage(image));
    ui->image_Label_3->update();

    ui->width_Measurement->setText(QString::number(image.width()));
    ui->height_Measurement->setText(QString::number(image.height()));
    QStringList pieces = image_Paths.value(current_Slide).split( "/" );
    QString neededWord = pieces.value( pieces.length() - 1 );
    ui->image_Name->setText(neededWord);
}

void system_Ui::on_next_Image_Btn_clicked()
{
    QStringList image_Paths = get_File_List();
    ui->image_Label_3->clear();
    ui->image_Name->clear();
    current_Slide++;
    if (current_Slide >= image_Paths.size())
      current_Slide = 0;

    QImage image = QImage(this->get_File_List().value(current_Slide));
    ui->image_Label_3->setPixmap(QPixmap::fromImage(image));
    ui->image_Label_3->update();

    ui->width_Measurement->setText(QString::number(image.width()));
    ui->height_Measurement->setText(QString::number(image.height()));
    QStringList pieces = image_Paths.value(current_Slide).split( "/" );
    QString neededWord = pieces.value( pieces.length() - 1 );
    ui->image_Name->setText(neededWord);
}

//==================== Metadata =========================
