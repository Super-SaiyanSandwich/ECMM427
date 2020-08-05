#include "fitter_Widget.h"
#include "image_Management_Nui.h"
#include "ui_fitter_Widget.h"
#include "splash_Screen.h"

#include <QFileDialog>
#include <QMessageBox>
#include <QProcess>
#include <QDebug>



fitter_Widget::fitter_Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::fitter_Widget)
{

    qInfo() << "Begin MD";

    ui->setupUi(this);
    QStringList image_Paths = get_File_List();
    ui->image_Label->clear();
    ui->image_Name->clear();

    QImage image = QImage(this->get_File_List().value(0));

    ui->image_Label->setPixmap(QPixmap::fromImage(image));
    ui->image_Label->update();
    QStringList pieces = image_Paths.value(0).split( "/" );
    QString neededWord = pieces.value( pieces.length() - 1 );
    ui->image_Name->setText(neededWord);
    ui->generate_Btn->setDisabled(true);

}

fitter_Widget::~fitter_Widget()
{
    delete ui;
}

//======================================== FITTERS PAGE ================================
/// Runs the selected fitter program on the images in the {@link CropExecuteLayout#lpImagesGrid} by creating a new
/// LP file for them, cropping them if the crop is selected, and running the fitter using the new LP file. Prints
/// the output of th e fitter to the {@link CropExecuteLayout#fitterOutputArea}.Deals with all errors that
/// could occur in this method through the use of an error dialog.



void fitter_Widget::on_generate_Btn_clicked()
{
     ui->status->setText("Loading...");
     ui->progress_Bar->setMaximum(100);
     ui->progress_Bar->setMinimum(0);
     ui->progress_Bar->setValue(0);
     QString ptm_Option = ui->ptm_Luminance->currentText(); // check t+he current luminance option selected e.g {rgb / lrgb}
     QString hsh_Option = ui->hsh_Order->currentText();


    if(ui->ptm_Fitter->isChecked()){
        ui->progress_Bar->setValue(current_Slide+1);

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

            ui->generate_Btn->setDisabled(true);
            ui->progress_Bar->setValue(current_Slide+1);
            fitter_Location += fitter_Args.join(" ");   // entire command line executable with the arguments
            try {
                //run the executable with the command-line arguments
                ui->progress_Bar->setValue(current_Slide+1);
                QProcess *process = new QProcess(this);




                connect(process, SIGNAL(finished(int, QProcess::ExitStatus)), this, SLOT(itHasFinished(int, QProcess::ExitStatus)));


                process->start(fitter_Location);
                ui->progress_Bar->setValue(current_Slide+1);




               while(process->state() == 1)
               {
                   std_Output = process->readAllStandardOutput();

                   ui->fitter_Info->setText("Working\n------------------\n"+std_Output);

                   QApplication::processEvents( QEventLoop::ExcludeUserInputEvents);
               }

               process->waitForFinished(-1);

                // will wait forever until finished
                ui->progress_Bar->setValue(100);
                ui->status->setText("Finished...");

                std_Output = process->readAllStandardOutput();
                std_Error = process->readAllStandardError();
                ui->fitter_Info->setText("Worked Sucessfully\n======================================\n"+std_Output);;
                ui->generate_Btn->setDisabled(true);





            }catch (std::exception e){

                ui->fitter_Info->setText("Failed to Work\n======================================\n"+std_Error);

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
        ui->progress_Bar->setValue(current_Slide+1);

        QString hsh_Option = ui->hsh_Order->currentText(); // check the current luminance option selected e.g {rgb / lrgb}

        if ( lp_Path != "" && output_Path != "" && hsh_Option != ""){
            ui->progress_Bar->setValue(current_Slide+1);

            /* the hsh has command-line args of :
                            <fitter location> <lp file location> <HSH order> <destination filepath>
            */



            fitter_Location += " "+ lp_Path + hsh_Option +" " + output_Path; // entire command line executable with the arguments
            try {

                //run the executable with the command-line arguments
                qInfo()<<fitter_Location;
                ui->progress_Bar->setValue(current_Slide+1);

                QProcess *process = new QProcess(this);


                connect(process, SIGNAL(finished(int, QProcess::ExitStatus)), this, SLOT(done(int, QProcess::ExitStatus)));


                process->start(fitter_Location);
                ui->progress_Bar->setValue(current_Slide+1);


                while(process->state() == 1)
                {
                    std_Output = process->readAllStandardOutput();

                    ui->fitter_Info->setText("Working\n------------------\n"+std_Output);

                    QApplication::processEvents( QEventLoop::ExcludeUserInputEvents);
                }

                process->waitForFinished(-1);
                // will wait forever until finished
                ui->progress_Bar->setValue(100);
                ui->status->setText("Finished...");

                std_Output = process->readAllStandardOutput();
                std_Error = process->readAllStandardError();

                ui->fitter_Info->setText("Worked Sucessfully\n=======================================\n"+std_Output);


                ui->generate_Btn->setDisabled(true);


            }catch (std::exception e){
                ui->fitter_Info->setText("Failed to Work\n======================================\n"+std_Error);

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

    QString wd = splashScreen::project_Path;



}



void fitter_Widget::done(int exitCode, QProcess::ExitStatus exitStatus)
{
    if(exitCode == 0 and exitStatus == QProcess::NormalExit) //The application closed properly (no crash)
    {
    //Let's make progress bar to show 100%
        ui->progress_Bar->setMaximum(100);
        ui->progress_Bar->setMinimum(0);
        ui->progress_Bar->setValue(100);
    }
}

QString fitter_Widget:: error_Message(bool hsh)
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

void fitter_Widget::on_cancel_fitter_Btn_clicked()
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

void fitter_Widget::on_fitter_Location_clicked()
{
    QFileDialog dialog(this);

    QString filter_2 = "fitter(*.exe)";     //(ptm or hsh)


    fitter_Location = dialog.getOpenFileName(this, tr("Open File"),
                                                    "",
                                                    filter_2);

    ui->fitter_Placeholder->setText(fitter_Location);


}

void fitter_Widget::on_lp_Location_clicked()
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

void fitter_Widget::on_output_Location_clicked()
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

void fitter_Widget::on_resize_Checkbox_clicked()
{
    //TODO = RESIZE IMAGE
    ui->width_Measurement->setEnabled(true);
    ui->height_Measurement->setEnabled(true);
}

void fitter_Widget::on_ptm_Fitter_clicked()
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

void fitter_Widget::on_hsh_Fitter_clicked()
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

QStringList fitter_Widget:: get_File_List()
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

void fitter_Widget::on_previous_Image_Btn_clicked()
{
    QStringList image_Paths = get_File_List();
    ui->image_Label->clear();
    ui->image_Name->clear();

    current_Slide--;

    if (current_Slide < 0)
        current_Slide = image_Paths.size()-1;


    QImage image = QImage(this->get_File_List().value(current_Slide));

    ui->image_Label->setPixmap(QPixmap::fromImage(image));
    ui->image_Label->update();

    ui->width_Measurement->setText(QString::number(image.width()));
    ui->height_Measurement->setText(QString::number(image.height()));
    QStringList pieces = image_Paths.value(current_Slide).split( "/" );
    QString neededWord = pieces.value( pieces.length() - 1 );
    ui->image_Name->setText(neededWord);
}

void fitter_Widget::on_next_Image_Btn_clicked()
{
    QStringList image_Paths = get_File_List();
    ui->image_Label->clear();
    ui->image_Name->clear();
    current_Slide++;
    if (current_Slide >= image_Paths.size())
      current_Slide = 0;

    QImage image = QImage(this->get_File_List().value(current_Slide));
    ui->image_Label->setPixmap(QPixmap::fromImage(image));
    ui->image_Label->update();

    ui->width_Measurement->setText(QString::number(image.width()));
    ui->height_Measurement->setText(QString::number(image.height()));
    QStringList pieces = image_Paths.value(current_Slide).split( "/" );
    QString neededWord = pieces.value( pieces.length() - 1 );
    ui->image_Name->setText(neededWord);
}
