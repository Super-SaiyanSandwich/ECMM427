#ifndef CROP_WIDGET_H
#define CROP_WIDGET_H

#include "cropped_area.h"

#include <QGraphicsPixmapItem>
#include <QLabel>
#include <QListWidget>
#include <QWidget>

namespace Ui {
class crop_Widget;
}

class crop_Widget : public QWidget
{
    Q_OBJECT

public:
    explicit crop_Widget(QWidget *parent = nullptr, QString base_String = "", QList<QListWidgetItem *> * icons = new QList<QListWidgetItem *>());
    ~crop_Widget();
    void set_RGB(int r, int g, int b);
    bool load_Cropping_File(const QString &fileName);

private slots:
    void on_work_Images_itemDoubleClicked(QListWidgetItem *item);

    void on_cancel_btn_clicked();

    void on_horizontal_Slider_X_2_sliderReleased();

    void on_horizontal_Slider_Y_2_sliderReleased();

    void on_crop_btn_clicked();
    void on_spin_Box_X_2_valueChanged(int X);
    void on_spin_Box_Y_2_valueChanged(int Y);
    void on_spin_Box_Height_valueChanged(double value);
    void on_spin_Box_Width_valueChanged(double value);
    void on_horizontal_Slider_X_2_valueChanged(int value);
    void on_horizontal_Slider_Y_2_valueChanged(int value);
    void on_horizontal_Slider_Height_valueChanged(int value);
    void on_horizontal_Slider_Width_valueChanged(int value);
    void on_horizontal_Scroll_Bar_Red_2_valueChanged(int value);
    void on_horizontal_Scroll_Bar_Green_2_valueChanged(int value);
    void on_horizontal_Scroll_Bar_Blue_2_valueChanged(int value);
    void on_colour_Selector_Button_2_clicked();
    void on_open_Button_2_clicked();
    void on_zoom_Reset_Button_2_clicked();
    void on_zoom_In_Button_2_clicked();
    void on_zoom_Out_Button_2_clicked();

private:
    bool first_Load = true;

    QGraphicsPixmapItem* base_Image;
    QGraphicsPixmapItem* preview_Image;

    QList<QListWidgetItem *> * icons;
    QGraphicsScene* crop_Selection_Screen ;
    cropped_Area *selected_Area;
    QLabel *image_Label;
    int thread_Count = 0;
    int zoom_Percentage = 100;

    Ui::crop_Widget *ui;
    QImage apply_Effect_To_Pixmap(QImage src, QGraphicsEffect *effect, int extent);
    QPixmap apply_Effect_To_Pixmap(QPixmap src, QGraphicsEffect *effect, int extent);
    void update_Main_Cropped_Image();
    void update_Crop_Preview_Image();
    void reload_Preview();
    void image_Crop_Zoom(int percent);



    QString load_Crop_Image_Icons();
    void reset_Crop_Image_Zoom();
    void image_Zoom(int percent);
    void set_Crop_Maximums();
    QString load_Image_Icons();

    void add_Crop_Item_To_List(QImage image, QString filename);

protected:
    void showEvent(QShowEvent *ev);
    bool eventFilter(QObject *object, QEvent *event);
};

#endif // CROP_WIDGET_H
