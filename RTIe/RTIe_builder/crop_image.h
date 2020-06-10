#ifndef CROP_IMAGE_H
#define CROP_IMAGE_H

#include <QMainWindow>
#include <QMainWindow>
#include <QWidget>
#include <QLabel>
#include <QScrollBar>


namespace Ui { class crop_image; }


class crop_image : public QMainWindow
{
    Q_OBJECT

public:
    crop_image(QWidget *parent = nullptr);
    ~crop_image();
    bool load_File(const QString &);

private:
    Ui::crop_image *ui;
    QImage base_Image_2;
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

signals:

public slots:
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
};
#endif // CROP_IMAGE_H









