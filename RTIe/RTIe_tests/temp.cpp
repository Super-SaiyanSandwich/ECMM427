#include <QtTest>

class Test_crop_Widget: public QObject
{
    Q_OBJECT

public:
    Test_crop_Widget();
    ~Test_crop_Widget();
    void set_RGB(int r, int g, int b);
    bool load_Cropping_File(const QString &fileName);

private slots:
//    void on_work_Images_itemDoubleClicked(QListWidgetItem *item);

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
    void on_zoom_Reset_Button_2_clicked();
    void on_zoom_In_Button_2_clicked();
    void on_zoom_Out_Button_2_clicked();

private:
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


void Test_crop_Widget::set_RGB(int a,int b,int c){

}
