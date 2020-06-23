#ifndef SYSTEM_UI_H
#define SYSTEM_UI_H

#include <QMainWindow>
#include <QListWidgetItem>
#include <QLabel>
#include <QLineEdit>
#include <QListWidget>
#include <QFile>
#include <QGraphicsScene>
#include <QGraphicsPixmapItem>
#include <QComboBox>

#include "cropped_area.h"

namespace Ui {
class system_Ui;
class crop_image;
}

class system_Ui : public QMainWindow
{
    Q_OBJECT

public:
    explicit system_Ui(QWidget *parent = nullptr, QString base_Image_2 = "");
    ~system_Ui();
    static void start();
    static QListWidget listWidget;
    static QListWidget listWidget_3;
    bool load_Cropping_File(const QString &);
    QString chosen_Location;
    QString project;
    QImage base_Image;
    void set_RGB(int r, int g, int b);

public slots:

    void image_Display();
    void on_spin_Box_X_2_valueChanged(int X);
    void on_spin_Box_Y_2_valueChanged(int arg1);
    void on_horizontal_Slider_X_2_valueChanged(int value);
    void on_horizontal_Slider_Y_2_valueChanged(int value);
    void on_horizontal_Scroll_Bar_Red_2_valueChanged(int value);
    void on_horizontal_Scroll_Bar_Green_2_valueChanged(int value);
    void on_horizontal_Scroll_Bar_Blue_2_valueChanged(int value);
    void on_colour_Selector_Button_2_clicked();
    void on_horizontal_Slider_Width_valueChanged(int width);
    void on_open_Button_2_clicked();
    void on_zoom_Reset_Button_2_clicked();
    void on_zoom_In_Button_2_clicked();
    void on_zoom_Out_Button_2_clicked();
    void on_test_Button_2_clicked();
    void on_horizontal_Slider_Height_valueChanged(int height);
    void on_cancel_btn_clicked();
    void on_crop_btn_clicked();
    void update_Crop_Preview_Image();
    QStringList findQmFiles();
    void image_Crop_Zoom(int percent);


private slots:


    void open_Selected_Project();

    void on_listWidget_itemClicked(QListWidgetItem *item);

    void on_import_btn_clicked();

    void on_delete_Btn_clicked();

    void on_marble_Detection_Btn_clicked();

    void on_remove_Marble_Btn_clicked();

    void on_export_Btn_clicked();

    void on_image_Management_Btn_2_clicked();

    void on_remove_Marble_Btn_2_clicked();

    void on_export_Btn_2_clicked();

    void on_image_Management_Btn_3_clicked();

    void on_marble_Detection_Btn_3_clicked();

    void on_export_Btn_3_clicked();

    void on_image_Management_Btn_4_clicked();

    void on_marble_Detection_Btn_4_clicked();

    void on_remove_Marble_Btn_4_clicked();

    void on_listWidget_3_itemClicked(QListWidgetItem *item);

    void on_generate_Btn_clicked();

    void on_lp_Location_clicked();

    void on_output_Location_clicked();

    void on_fitter_Location_clicked();

    void on_actionEnglish_triggered();

    void on_resize_Checkbox_clicked();

//    void on_radioButton_clicked();

    void on_ptm_Fitter_clicked();

    void on_hsh_Fitter_clicked();
    void on_horizontal_Slider_Y_2_sliderReleased();
    void on_horizontal_Slider_X_2_sliderReleased();


private:
    //=========================== Crop Image Page ===============================================================
    Ui::system_Ui *ui;


    cropped_Area *selected_Area;
    QList<cropped_Area*> cropped_Area_List;

    QGraphicsScene *crop_Selection_Screen;
    QGraphicsPixmapItem *base_Image_2;

    QLabel *image_Label_2;

//    int x;
//    int y;
//    double height;
//    double width;

//    int r = 0;
//    int g = 0;
//    int b = 0;

    int thread_Count = 0;
    int zoom_Percentage = 100;

//    void update_Crop_Marker();
    void reset_Image_Zoom();
    void image_Zoom(int percent);
    void adjust_Scroll_Bar(QScrollBar *scrollBar, double factor);
    void set_Crop_Maximums();
    void on_spin_Box_Width_valueChanged(double arg1);
    void on_spin_Box_Height_valueChanged(double arg1);
    QString load_Image_Icons();
    void inverted_Marker();
    QPixmap apply_Effect_To_Image(QPixmap src, QGraphicsEffect *effect,int extent = 0);
    QImage apply_Effect_To_Image(QImage src, QGraphicsEffect *effect,int extent = 0);

    void update_Main_Cropped_Image();

    QFile lp_File;
//    Ui::crop_image *new_ui;

};

#endif // SYSTEM_UI_H
