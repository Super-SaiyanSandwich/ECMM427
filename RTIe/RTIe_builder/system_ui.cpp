#include "system_ui.h"
#include "image_Management_Nui.h"
#include "splash_Screen.h"
#include "ui_system_ui.h"
#include "marble_Detection.h"
#include "ptm_fitter.h"
#define dumpval(x) qDebug()<<#x<<'='<<x

#include <QTranslator>
#include <QFileDialog>
#include <QDebug>
#include <QPixmap>
#include <QListWidgetItem>
#include <QDebug>
#include <QFile>
#include <QFileDialog>
#include <QLabel>
#include <QLineEdit>
#include <QObject>
#include <QTextBrowser>

#include <tuple>
#include <vector>
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
//#include <windows.h>

using namespace std;

// CONSTANT VALUES
#define CENTER_SCALE_FACTOR 0.3
#define SCROLL_AREA_HEIGHT 694.0
#define SCROLL_AREA_WIDTH 1044.0
#define CONTRAST_PIVOT_POINT 210
#define CONTRAST_SCALE 3


system_Ui::system_Ui(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::system_Ui)
{

    ui->setupUi(this);
    ui->listWidget->setViewMode(QListWidget::IconMode);
    ui->listWidget->setIconSize(QSize(200,150));
    ui->listWidget->setResizeMode(QListWidget::Adjust);

    ui->listWidget_3->setViewMode(QListWidget::IconMode);
    ui->listWidget_3->setResizeMode(QListWidget::Adjust);
    ui->listWidget_3->setIconSize(QSize(100,50));
//    ui->metadata_Table-> QTableWidget(int rows, int columns, this);

    image_Display();

}

system_Ui::~system_Ui()
{
    delete ui;
}




void system_Ui::open_Selected_Project()//IMPORTANT FUNCTION
{

    QFileDialog dialog(this);
    dialog.setFileMode(QFileDialog::ExistingFile);
    //dialog.setNameFilter(tr("RTIe Files (*.rtie"));

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

void system_Ui::start(){
    system_Ui *home = new system_Ui();
    home->showMaximized();
}

void system_Ui::image_Display(){

    QStringList path_List = image_Management_Nui::get_Working_Image_Paths();//*splashScreen::project_Path
    QStringListIterator file_Iterator(path_List);
    QStringList file_Names;

    while (file_Iterator.hasNext())
    {

        QString path = file_Iterator.next().toLocal8Bit().constData(); //Path Location
        QFile current_Image(path);
        QFileInfo current_Image_Info(current_Image.fileName());
        QString file_Name(current_Image_Info.fileName());
        file_Names.append(file_Name);

        QListWidgetItem *item = new QListWidgetItem(QIcon(path),QString(file_Name));
        item->setFlags(item->flags() | Qt::ItemIsUserCheckable); // set checkable flag
        item->setCheckState(Qt::Unchecked); // AND initialize check state
        ui->listWidget->addItem(item);
        ui->listWidget_3->addItem(item);
    }


}


void system_Ui::on_listWidget_itemClicked(QListWidgetItem *item) //Produce the selected Image in the Thumbnail
{
    QString preview_Image = splashScreen::project_Path+ "/images/wd/" +item->text();
    qInfo() << "Item Selected:" << preview_Image;
    this->base_Image = QImage(preview_Image);
    QPixmap pix = QPixmap::fromImage(this->base_Image);
    int w = ui->image_Preview->width();
    int h = ui->image_Preview->height();
    ui->image_Preview->clear();
    ui->image_Preview->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio));
    ui->image_Preview->update();
}

/*
 * Triggers the event for image_Management_Nui::import()
 */
void system_Ui::on_import_btn_clicked()
{
    image_Management_Nui::import(this);

    // We must clear the listWidget in order to prevent populating it with the
    // same items repeatedly
    ui->listWidget->clear();
    ui->listWidget_3->clear();
    system_Ui::image_Display();
}

/*
 * When the delete button is pressed it will get all the items
 * in the QListWidget that are Qt::Checked and pass them to the
 * delete function to be deleted (or not, depending on the user's choice).
 */
void system_Ui::on_delete_Btn_clicked()
{
    // checked_Image_Names will contain the file_Names of all checked images
    QStringList checked_Image_Names;
    // Iterate over all listWidget items and check their states
    for(int i = 0; i < ui->listWidget->count(); ++i)
    {
        QListWidgetItem* item = ui->listWidget->item(i);
        bool isChecked = item->checkState();

        //If isChecked is true, the item names will be appended to Checked_Image_Names
        if(isChecked){
            checked_Image_Names<< item->text();
        }
    }

    image_Management_Nui::delete_(checked_Image_Names);

    // We must clear the listWidget in order to prevent populating it with the
    // same items repeatedly
    ui->listWidget->clear();
    ui->listWidget_3->clear();
    system_Ui::image_Display();
}


//void system_Ui::on_export_2_clicked()
//{
//    ptm_fitter *t = new ptm_fitter();
//    t->show();
//}



//void system_Ui::on_spin_Box_Radius_valueChanged(double arg1)
//{
//    marble_Detection *offset = new marble_Detection();
//    arg1 = offset->radius;
//    offset->on_spin_Box_Radius_valueChanged(arg1);
//}


// ===========================Cropped Image Page =========================================================



void system_Ui::on_listWidget_3_itemClicked(QListWidgetItem *item)
{
    QString preview_Image_2 = splashScreen::project_Path+ "/images/wd/" +item->text();
    qInfo() << "Item Selected:" << preview_Image_2;
    this->base_Image_2 = QImage(preview_Image_2);
    QPixmap pix = QPixmap::fromImage(this->base_Image_2);//new_ui
    int w = ui->image_Label_2->width();
    int h = ui->image_Label_2->height();
    ui->image_Label_2->clear();
    ui->image_Label_2->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio));
    ui->image_Label_2->update();
}

void system_Ui::on_crop_btn_clicked()
{
    QString image_Path = QFileDialog::getSaveFileName(
            this,
            tr("Save File"),
            "",
            tr("JPEG(*.jpg *.jpeg);;PNG(*.png)")
            );
    QImage crop = ui->preivew_Label_2->pixmap()->toImage();
    crop.save(image_Path);
}



void system_Ui::on_cancel_btn_clicked()
{
    QApplication::exit();
}


/// \brief Updates the images displayed on screen by painting over the base image

void system_Ui::update_Marble_Marker()
{
    //qInfo() << "TWtatat";
    QPixmap base_Pix = QPixmap::fromImage(this->base_Image_2);
    QPainter *paint = new QPainter(&base_Pix);

    QPen pen;

    pen.setBrush(QColor(r,g,b));
    pen.setWidth(5);

    int h = this->height;
    int w = this->width;

    paint->setPen(pen);

    // Rectangle
    paint->drawRect(this->x, this->y, h, w+5);

    paint->end();


    ui->image_Label_2->clear();
    ui->image_Label_2->setPixmap(base_Pix);
    ui->image_Label_2->update();

    QPixmap target(h, w + 5);

    paint = new QPainter(&target);


    base_Pix = QPixmap::fromImage(this->base_Image_2);
    paint->drawPixmap(-this->x, -this->y, base_Pix);


    ui->preivew_Label_2->clear();
    ui->preivew_Label_2->setPixmap(target);
    ui->preivew_Label_2->update();
}

void system_Ui::reset_Image_Zoom()
{
    zoom_Percentage = 100;

    float scaler =  SCROLL_AREA_HEIGHT / this->base_Image_2.height();
    scaler = scaler < (SCROLL_AREA_WIDTH / this->base_Image_2.width()) ? scaler : (SCROLL_AREA_WIDTH / this->base_Image_2.width());


    ui->image_Label_2->resize(this->base_Image_2.width() * scaler, this->base_Image_2.height() * scaler);

    return;
}

void system_Ui::image_Zoom_In(int percent)
{
    zoom_Percentage += percent;

    float scaler =  SCROLL_AREA_HEIGHT / this->base_Image_2.height();
    scaler = scaler < (SCROLL_AREA_WIDTH / this->base_Image_2.width()) ? scaler : (SCROLL_AREA_WIDTH / this->base_Image_2.width());

    ui->image_Label_2->resize(this->base_Image_2.width() * scaler * zoom_Percentage / 100, this->base_Image_2.height() * scaler * zoom_Percentage / 100);
    //ui->scrollArea->adjustSize();

    adjust_Scroll_Bar(ui->scrollArea->horizontalScrollBar(), 100 + percent);
    adjust_Scroll_Bar(ui->scrollArea->verticalScrollBar(), 100 + percent);

    ui->zoom_In_Button_2->setEnabled(zoom_Percentage < 300);
}

void system_Ui::image_Zoom_Out(int percent)
{
    zoom_Percentage -= percent;

    float scaler =  SCROLL_AREA_HEIGHT / this->base_Image_2.height();
    scaler = scaler < (SCROLL_AREA_WIDTH / this->base_Image_2.width()) ? scaler : (SCROLL_AREA_WIDTH / this->base_Image_2.width());

    ui->image_Label_2->resize(this->base_Image_2.width() * scaler * zoom_Percentage / 100, this->base_Image_2.height() * scaler * zoom_Percentage / 100);


    adjust_Scroll_Bar(ui->scrollArea->horizontalScrollBar(), 100 - percent);
    adjust_Scroll_Bar(ui->scrollArea->verticalScrollBar(), 100 - percent);

    ui->zoom_Out_Button_2->setEnabled(zoom_Percentage > 33);
}

void system_Ui::adjust_Scroll_Bar(QScrollBar *scrollBar, double factor)
{
    factor = factor / 100.0;
    scrollBar->setValue(int(factor * scrollBar->value()
                            + ((factor - 1) * scrollBar->pageStep()/2)));
}

void system_Ui::on_spin_Box_X_2_valueChanged(int X)
{
    qInfo() << "X Value Changed";
    this->x = X;
    ui->horizontal_Slider_X_2->setValue(X);
    this->update_Marble_Marker();
}

void system_Ui::on_spin_Box_Y_2_valueChanged(int Y)
{
    this->y = Y;
    ui->horizontal_Slider_Y_2->setValue(Y);
    this->update_Marble_Marker();
}

void system_Ui::on_spin_Box_Radius_2_valueChanged(double height)
{
    this->height = height;

    ui->horizontal_Slider_Radius_2->setValue(height);
    this->update_Marble_Marker();

    ui->spin_Box_Y_2->setMaximum(base_Image_2.height() - height);
    ui->horizontal_Slider_Y_2->setMaximum(base_Image_2.height() - height);

    ui->spin_Box_X_2->setValue(this->x);
    ui->spin_Box_Y_2->setValue(this->y);
    ui->horizontal_Slider_X_2->setValue(this->x);
    ui->horizontal_Slider_Y_2->setValue(this->y);
}

void system_Ui::on_spin_Box_Radius_3_valueChanged(double width)
{

    this->width = width;

    ui->horizontal_Slider_Radius_3->setValue(width);
    this->update_Marble_Marker();

    ui->spin_Box_X_2->setMaximum(base_Image_2.width() - 0.5*width);
    ui->horizontal_Slider_X_2->setMaximum(base_Image_2.width() - 0.5*width);

    ui->spin_Box_X_2->setValue(this->x);
    ui->spin_Box_Y_2->setValue(this->y);
    ui->horizontal_Slider_X_2->setValue(this->x);
    ui->horizontal_Slider_Y_2->setValue(this->y);
}

void system_Ui::on_horizontal_Slider_X_2_valueChanged(int value)
{
    this->x = value;
    ui->spin_Box_X_2->setValue(value);
    this->update_Marble_Marker();
}

void system_Ui::on_horizontal_Slider_Y_2_valueChanged(int value)
{
    this->y = value;
    ui->spin_Box_Y_2->setValue(value);
    this->update_Marble_Marker();
}

void system_Ui::on_horizontal_Slider_Radius_2_valueChanged(int value)
{


    this->height = value;

    ui->spin_Box_Radius_2->setValue(value);
    this->update_Marble_Marker();

    ui->spin_Box_Y_2->setMaximum(base_Image_2.height() - height);
    ui->horizontal_Slider_Y_2->setMaximum(base_Image_2.height() - height);

    ui->spin_Box_X_2->setValue(this->x);
    ui->spin_Box_Y_2->setValue(this->y);
    ui->horizontal_Slider_X_2->setValue(this->x);
    ui->horizontal_Slider_Y_2->setValue(this->y);
}

void system_Ui::on_horizontal_Slider_Radius_3_valueChanged(int value)
{

    this->width = value;


    ui->spin_Box_Radius_3->setValue(value);
    this->update_Marble_Marker();

    ui->spin_Box_X_2->setMaximum(base_Image_2.width() - 0.5*width);
    ui->horizontal_Slider_X_2->setMaximum(base_Image_2.width() - 0.5*width);

    ui->spin_Box_X_2->setValue(this->x);
    ui->spin_Box_Y_2->setValue(this->y);
    ui->horizontal_Slider_X_2->setValue(this->x);
    ui->horizontal_Slider_Y_2->setValue(this->y);
}

void system_Ui::on_horizontal_Scroll_Bar_Red_2_valueChanged(int value)
{
    this->r = value;
    this->update_Marble_Marker();
}

void system_Ui::on_horizontal_Scroll_Bar_Green_2_valueChanged(int value)
{
    this->g = value;
    this->update_Marble_Marker();
}

void system_Ui::on_horizontal_Scroll_Bar_Blue_2_valueChanged(int value)
{
    this->b = value;
    this->update_Marble_Marker();
}

void system_Ui::on_colour_Selector_Button_2_clicked()
{
    QColor new_Colour = QColorDialog::getColor(QColor(r,g,b), this );
    r = new_Colour.red();
    g = new_Colour.green();
    b = new_Colour.blue();

    ui->horizontal_Scroll_Bar_Red_2->setValue(r);
    ui->horizontal_Scroll_Bar_Green_2->setValue(g);
    ui->horizontal_Scroll_Bar_Blue_2->setValue(b);
}

bool system_Ui::load_File(const QString &fileName)
{
    QImageReader reader(fileName);
    reader.setAutoTransform(true);
    const QImage newImage = reader.read();
    if (newImage.isNull()) {
        QMessageBox::information(this, QGuiApplication::applicationDisplayName(),
                                 tr("Cannot load %1: %2")
                                 .arg(QDir::toNativeSeparators(fileName), reader.errorString()));
        return false;
    }
    base_Image_2 = newImage;

    setWindowFilePath(fileName);

    const QString message = tr("Opened \"%1\", %2x%3, Depth: %4")
        .arg(QDir::toNativeSeparators(fileName)).arg(base_Image_2.width()).arg(base_Image_2.height()).arg(base_Image_2.depth());
    statusBar()->showMessage(message);

    this->set_Maximums();
    this->update_Marble_Marker();
    this->reset_Image_Zoom();

    return true;
}

static void initializeImageFileDialog(QFileDialog &dialog, QFileDialog::AcceptMode acceptMode)
{
    static bool firstDialog = true;

    if (firstDialog) {
        firstDialog = false;
        const QStringList picturesLocations = QStandardPaths::standardLocations(QStandardPaths::PicturesLocation);
        dialog.setDirectory(picturesLocations.isEmpty() ? QDir::currentPath() : picturesLocations.last());
    }

    QStringList mimeTypeFilters;
    const QByteArrayList supportedMimeTypes = acceptMode == QFileDialog::AcceptOpen
        ? QImageReader::supportedMimeTypes() : QImageWriter::supportedMimeTypes();
    foreach (const QByteArray &mimeTypeName, supportedMimeTypes)
        mimeTypeFilters.append(mimeTypeName);
    mimeTypeFilters.sort();
    dialog.setMimeTypeFilters(mimeTypeFilters);
    dialog.selectMimeTypeFilter("image/jpeg");
    if (acceptMode == QFileDialog::AcceptSave)
        dialog.setDefaultSuffix("jpg");
}

void system_Ui::on_open_Button_2_clicked()
{
    QFileDialog dialog(this, tr("Open File"));
    initializeImageFileDialog(dialog, QFileDialog::AcceptOpen);

    while (dialog.exec() == QDialog::Accepted && !load_File(dialog.selectedFiles().first())) {};
}

void system_Ui::on_zoom_Reset_Button_2_clicked()
{
    reset_Image_Zoom();
}

void system_Ui::on_zoom_In_Button_2_clicked()
{
    image_Zoom_In(25);
}

void system_Ui::on_zoom_Out_Button_2_clicked()
{
    image_Zoom_Out(25);
}

void system_Ui::set_Maximums()
{
    double center = ((0.5 *width) + (0.5*height));
    ui->horizontal_Slider_X_2->setMaximum(this->x - center * 2);
    ui->horizontal_Slider_Y_2->setMaximum(this->y - center * 2);

    ui->spin_Box_X_2->setMaximum(this->x - center * 2);
    ui->spin_Box_Y_2->setMaximum(this->y - center * 2);
}

void system_Ui::on_test_Button_2_clicked()
{
    QRgb pixel;
    QColor col;
    int r, g, b;

    vector<tuple<int,int>> cluster_Points;

    QImage cropped_image = ui->preivew_Label_2->pixmap()->toImage();


    for(int x = 0; x < cropped_image.width(); x++)
    {
        for (int y = 0; y < cropped_image.height(); y++) {
            pixel  = cropped_image.pixel(x,y);
            col = QRgb(pixel);
            col.getRgb(&r, &g, &b);

            r -= CONTRAST_PIVOT_POINT;
            r *= CONTRAST_SCALE;
            r += CONTRAST_PIVOT_POINT;
            r = r > 255 ? 255 : r;
            r = r < 0 ? 0 : r;

            g -= CONTRAST_PIVOT_POINT;
            g *= CONTRAST_SCALE;
            g += CONTRAST_PIVOT_POINT;
            g = g > 255 ? 255 : g;
            g = g < 0 ? 0 : g;

            b -= CONTRAST_PIVOT_POINT;
            b *= CONTRAST_SCALE;
            b += CONTRAST_PIVOT_POINT;
            b = b > 255 ? 255 : b;
            b = b < 0 ? 0 : b;


            if ((r == g) and (g == b) and (b == 255))
            {
                cluster_Points.emplace_back(x ,y);
            }


            cropped_image.setPixel(x, y, qRgb(r, g, b));

        }
    }

    double sum_X = 0;
    double sum_Y = 0;
    int count = 0;

    for (tuple<int, int> p : cluster_Points)
    {
        sum_X += get<0>(p);
        sum_Y += get<1>(p);
        count++;
    }
    sum_X /= count;
    sum_Y /= count;

    sum_X = int(sum_X);
    sum_Y = int(sum_Y);


    QPixmap base_Pix = QPixmap::fromImage(cropped_image);
    ui->preivew_Label_2->setPixmap(base_Pix);
}





//=================================================

void system_Ui::on_marble_Detection_Btn_clicked()
{
    //ui->stackedWidget->setCurrentIndex(1);
    marble_Detection *md = new marble_Detection(this, ui->listWidget->item(0)->text());
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

//=================================================



//======================================== PTM FITTER ================================
/// Runs the selected fitter program on the images in the {@link CropExecuteLayout#lpImagesGrid} by creating a new
/// LP file for them, cropping them if the crop is selected, and running the fitter using the new LP file. Prints
/// the output of th e fitter to the {@link CropExecuteLayout#fitterOutputArea}.Deals with all errors that
/// could occur in this method through the use of an error dialog.

QStringList fitter_Args; // list of all arguments
QString fitter_Location;

void system_Ui::on_generate_Btn_clicked()
{
    QString ptm_Option = ui->ptm_Luminance->currentText(); // check t+he current luminance option selected e.g {rgb / lrgb}
    if(ptm_Option == "RGB"){  // add the selected luminace as an argument
        fitter_Args += " -f 0 ";
    }
    else if(ptm_Option == "LRGB"){
        fitter_Args += " -f 1 ";
    }


    QString hsh_Option = ui->hsh_Order->currentText(); // check the current luminance option selected e.g {rgb / lrgb}
    if(ptm_Option == "1"){  // add the selected luminace as an argument
        fitter_Args += "1";
    }
    else if(ptm_Option == "2"){
        fitter_Args += "2";
    }
    else if(ptm_Option == "3"){
        fitter_Args += "3";
    }

    if (ptm_Option != "" && ui->ptm_Fitter->isChecked() && fitter_Args.size() == 3){ // make sure that all the necessary arguments are present
        /* the ptm fitter has command-line args of :
                <fitter location> -i <lp file location> -o <destination filepath> -f <rgb / lrgb>
        */

        fitter_Location += fitter_Args.join(" "); // entire command line executablle with the arguments
        try {
            //run the executable with the command-line arguments
            qInfo()<<fitter_Location;
            qInfo()<<fitter_Args;
            QProcess *process = new QProcess(this);
            process->start(fitter_Location);
            QFile result;
            QDataStream inputStream{process}, outputStream{&result};

            dumpval(result.open(stdout, QFile::WriteOnly));
            ui->fitter_Info->setText("Worked Sucessfully");
            ui->generate_Btn->setDisabled(true);


        }catch (exception e){
            qInfo() << "This is an error message!";
        }
    }
    else if (ui->hsh_Fitter->isChecked() && fitter_Args.size() == 3){
        /* the hsh has command-line args of :
                        <fitter location> <lp file location> <HSH order> <destination filepath>
        */

        // Clear all the fields.


        ui->fitter_Info->setText("HSH COMING SOON!!!");
        qInfo()<< "HSH COMING SOON";
    }
    else{
//        ui->fitter_Info->setText("Error Message: Fill all required boxes");
        /*
         * A summary is given containing all images that have been confirmed to be
         * deleted as well as those that have confirmed to be cancelled.
         */
        QString summary = "The following fields were empty:\n blah blah.\n Please fill them in and then generate your .ptm file.";

        QMessageBox Error_Summary;
        Error_Summary.setText("Delete operation summary.");
        Error_Summary.setInformativeText(summary );
        Error_Summary.setStandardButtons(QMessageBox::Ok);
        Error_Summary.setDefaultButton(QMessageBox::Ok);
        Error_Summary.exec();
        qInfo()<< "Error Message";
    }

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
        fitter_Args += " -i " + fileName +" ";

}


void system_Ui::on_output_Location_clicked()
{
    QFileDialog dialog(this);
    dialog.setFileMode(QFileDialog::ExistingFile);
    dialog.setOption(QFileDialog::ShowDirsOnly);
    QString output_Filename = "/output.ptm";
    // Stores the path of the user's choice.
    chosen_Location = dialog.getExistingDirectory() + output_Filename;

    ui->output_Placeholder->setText(chosen_Location);
    fitter_Args += " -o " + chosen_Location +" ";

}



void system_Ui::on_resize_Checkbox_clicked()
{
    ui->width_Measurement->setEnabled(true);
    ui->height_Measurement->setEnabled(true);

//    ui->width_Measurement->setDisabled(true);
//    ui->height_Measurement->setDisabled(true);
}



void system_Ui::on_ptm_Fitter_clicked()
{
    ui->Memory_Profile->setDisabled(true);
    ui->performance_Profile->setDisabled(true);
    ui->hsh_Order->setDisabled(true);

}

void system_Ui::on_hsh_Fitter_clicked()
{
    ui->Memory_Profile->setEnabled(true);
    ui->performance_Profile->setEnabled(true);
    ui->hsh_Order->setEnabled(true);
    ui->ptm_Luminance->setDisabled(true);
    ui->fitter_Info->clear();
    ui->generate_Btn->setEnabled(true);
}



//===============================================================

//QFile lp_File = NULL;
//    if(crop_Execute_Layout.isUseCrop()){
//        //if using crop, crop the files and create the lp file for them
//        lp_File = crop_And_Create_LP_File();

//    }else if(!crop_Execute_Layout.getImagesFormat().equals("jpg")){
//        //if not cropping, bu the images aren't jpg, we need to convert them to jpegs for the fitters
//        //so we'll convert them to jpg and create a new lp file for them
//        lp_File = convert_Images_And_Create_LP_File();

//    }else{
//        //otherwise, we can create an lp file straight from the images
//        lp_File = create_LP_File_JPEG_No_Crop();
//    }

//Main.showLoadingDialog("Running fitter...");



//    if(crop_Execute_Layout.ptmSelected()){


//    }else if(crop_Execute_Layout.hshSelected()){
//
//        fitter_Args += lp_File_Location + " ";
//        fitter_Args += tostring(crop_Execute_Layout.getHSHOrder()) + " ";
//        fitter_Args += destinationFileName;
//    }

//        std::array<char, 128> buffer;
//        std::string result;
//        std::unique_ptr<FILE, decltype(&pclose)> pipe(popen(process, "r"), pclose);
//        if (!pipe) {
//            throw std::runtime_error("popen() failed!");
//        }
//        while (fgets(buffer.data(), buffer.size(), pipe.get()) != nullptr) {
//            result += buffer.data();
//        }



        //reads to feed the output from the fitters to the text area in the crop execute layo

//        // read the output from the commandut
        //        std::istream stdInput =  new BufferedReader(new
        //                                                    InputStreamReader(process.getInputStream()));

        //        std::istream stdError = new BufferedReader(new
        //                InputStreamReader(process.getErrorStream()));
//        QString s = NULL;
//        while ((s = stdInput.readLine()) != NULL) {
//            if(crop_Execute_Layout.ptmSelected() && (!s.startsWith("Processing row"))) {
//                crop_Execute_Layout.printToFitterOutput(s);
//            }
//        }

//        // read any errors from the attempted command
//        while ((s = stdError.readLine()) != NULL) {
//            if(!s.matches("\\d+")) {
//                crop_Execute_Layout.printToFitterOutput(s);
//            }
//        }



//=================== Language ==========================

QStringList system_Ui::findQmFiles()
{
    QDir dir(":/translations");
    QStringList fileNames = dir.entryList(QStringList("*.qm"), QDir::Files,
                                          QDir::Name);
    for (QString &fileName : fileNames)
        fileName = dir.filePath(fileName);
    return fileNames;
}

void system_Ui::on_actionEnglish_triggered()
{
    const QStringList qmFiles = findQmFiles();
    for (int i = 0; i < qmFiles.size(); ++i) {
        const QString &qmlFile = qmFiles.at(i);
        qInfo()<< qmlFile;
    }
}


//=======================================================



//==================== Metadata =========================

