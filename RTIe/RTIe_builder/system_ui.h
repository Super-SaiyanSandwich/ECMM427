#ifndef SYSTEM_UI_H
#define SYSTEM_UI_H

#include <QMainWindow>
#include <QListWidgetItem>
#include <QLabel>
#include <QListWidget>

namespace Ui {
class system_Ui;
class crop_image;
}

class system_Ui : public QMainWindow
{
    Q_OBJECT

public:
    explicit system_Ui(QWidget *parent = nullptr);
    ~system_Ui();
    static void start();
    static QListWidget listWidget;
    static QListWidget listWidget_3;
    bool load_File(const QString &);

public slots:
    void image_Display();
    void on_spin_Box_X_2_valueChanged(int X);
    void on_spin_Box_Y_2_valueChanged(int arg1);
    void on_spin_Box_Radius_2_valueChanged(double arg1);
    void on_horizontal_Slider_X_2_valueChanged(int value);
    void on_horizontal_Slider_Y_2_valueChanged(int value);
    void on_horizontal_Scroll_Bar_Red_2_valueChanged(int value);
    void on_horizontal_Scroll_Bar_Green_2_valueChanged(int value);
    void on_horizontal_Scroll_Bar_Blue_2_valueChanged(int value);
    void on_colour_Selector_Button_2_clicked();
    void on_horizontal_Slider_Radius_2_valueChanged(int value);
    void on_open_Button_2_clicked();
    void on_zoom_Reset_Button_2_clicked();
    void on_zoom_In_Button_2_clicked();
    void on_zoom_Out_Button_2_clicked();
    void on_test_Button_2_clicked();
    void on_horizontal_Slider_Radius_3_valueChanged(int value);
    void on_spin_Box_Radius_3_valueChanged(double arg1);
    void on_cancel_btn_clicked();
    void on_crop_btn_clicked();


private slots:


    void open_Selected_Project();

//    void on_btn5_clicked();

//    void on_btn2_clicked();

//    void on_btn1_clicked();

//    void on_btn3_clicked();

//    void on_btn2_2_clicked();

//    void on_btn4_clicked();

//    void on_btn3_2_clicked();

//    void on_btn5_2_clicked();

//    void on_btn4_2_clicked();

//    void on_btn1_2_clicked();

    void on_listWidget_itemClicked(QListWidgetItem *item);

    void on_import_btn_clicked();

    void on_delete_Btn_clicked();

    void on_marble_Detection_Btn_clicked();

//    void on_export_2_clicked();

//    void on_horizontal_Slider_X_actionTriggered(int action);
    
//    void on_spin_Box_Radius_valueChanged(double arg1);
    
//    void on_export_3_clicked();

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

private:
    Ui::system_Ui *ui;
    QImage base_Image;

    //=========================== Crop Image Page ===============================================================

    QLabel *image_Label_2;

    int x;
    int y;
    double height;
    double width;

    int r = 0;
    int g = 0;
    int b = 0;
    int zoom_Percentage = 100;

    void update_Marble_Marker();
    void reset_Image_Zoom();
    void image_Zoom_In(int percent);
    void image_Zoom_Out(int percent);
    void adjust_Scroll_Bar(QScrollBar *scrollBar, double factor);
    void set_Maximums();

    QImage base_Image_2;
    Ui::crop_image *new_ui;

};

#endif // SYSTEM_UI_H
