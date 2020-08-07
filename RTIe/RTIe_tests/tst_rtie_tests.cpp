#include <QtTest/QtTest>

#include "test_suite.h"
#include "..\RTIe_builder\crop_Widget.h"



// add necessary includes here
class RTIe_tests : public QObject
{
    Q_OBJECT

public:
    void set_RGB(int r, int g, int b);
    void test_load_Cropping_File(); //const QString &fileName
//    RTIe_tests();
//    ~RTIe_tests();

private slots: //change to private
    void test_on_work_Images_itemDoubleClicked();//QListWidgetItem *item);
    void test_on_cancel_btn_clicked();
    void test_on_horizontal_Slider_X_2_sliderReleased();
    void test_on_horizontal_Slider_Y_2_sliderReleased();
    void test_on_crop_btn_clicked();

    void test_on_spin_Box_X_2_valueChanged();//int X);
    void test_on_spin_Box_Y_2_valueChanged();//int Y);
    void test_on_spin_Box_Height_valueChanged();//double value);
    void test_on_spin_Box_Width_valueChanged();//double value);
    void test_on_horizontal_Slider_X_2_valueChanged();//int value);
    void test_on_horizontal_Slider_Y_2_valueChanged();//int value);
    void test_on_horizontal_Slider_Height_valueChanged();//int value);
    void test_on_horizontal_Slider_Width_valueChanged();//int value);
    void test_on_horizontal_Scroll_Bar_Red_2_valueChanged();//int value);
    void test_on_horizontal_Scroll_Bar_Green_2_valueChanged();//int value);
    void test_on_horizontal_Scroll_Bar_Blue_2_valueChanged();//int value);
    void test_on_colour_Selector_Button_2_clicked();
    void test_on_zoom_Reset_Button_2_clicked();
    void test_on_zoom_In_Button_2_clicked();
    void test_on_zoom_Out_Button_2_clicked();

private:
    bool first_Load = true;


    int thread_Count = 0;
    int zoom_Percentage = 100;


    void test_Apply_Effect_To_Pixmap();
//    void test_update_Main_Cropped_Image();
//    void test_update_Crop_Preview_Image();
//    void test_reload_Preview();
//    void test_image_Crop_Zoom();//int percent);



//    void test_load_Crop_Image_Icons();
//    void test_reset_Crop_Image_Zoom();
//    void test_image_Zoom();
//    void test_set_Crop_Maximums();
//    void test_load_Image_Icons();

//    void add_Crop_Item_To_List(QImage image, QString filename);

protected:
      bool eventFilter(QObject* object, QEvent* event) override
      {
          qDebug() << event->type();

          return QObject::eventFilter(object, event);
      }



};



// Testing starts Here

void RTIe_tests::test_load_Cropping_File()
{
    const QString filename = ":/test.png";
    crop_Widget *obj = new crop_Widget();
    bool result = obj->load_Cropping_File(filename);
    QCOMPARE(result, true);
}

void RTIe_tests::test_on_crop_btn_clicked()
{
//    QPushButton crop_button;

//    crop_button.show();

//   crop_button.clicked(false);

//    QTest::mouseClick( &crop_button, Qt::LeftButton );
//    crop_button.clicked(true);
    try {
        crop_Widget *obj = new crop_Widget();
        obj->on_crop_btn_clicked();
    } catch (...) {
        qInfo()<<"An error has occured: ";
    }

}

void RTIe_tests::test_on_work_Images_itemDoubleClicked()
{
  try { //GOOD
        QListWidgetItem *newItem = new QListWidgetItem;
        newItem->setText("itemText");
        crop_Widget *obj = new crop_Widget();
        obj->on_work_Images_itemDoubleClicked(newItem);
    } catch (...) {
        qInfo()<<"An error has occured: ";
    }
    try { //BAD
          QListWidgetItem *newItem = new QListWidgetItem;
          newItem->setText("");
          crop_Widget *obj = new crop_Widget();
          obj->on_work_Images_itemDoubleClicked(newItem);
      } catch (...) {
          qInfo()<<"An error has occured: ";
      }

}


void RTIe_tests::test_on_cancel_btn_clicked()
{

    try {
        crop_Widget *obj = new crop_Widget();
        obj->on_cancel_btn_clicked();
    } catch (...) {
        qInfo()<<"An error has occured: ";
    }

}




void RTIe_tests::test_on_horizontal_Slider_X_2_sliderReleased()
{
    try {
        crop_Widget *obj = new crop_Widget();
        obj->on_horizontal_Slider_X_2_sliderReleased();
    } catch (...) {
        qInfo()<<"An error has occured: ";
    }

}

void RTIe_tests::test_on_horizontal_Slider_Y_2_sliderReleased()
{
    try {
        crop_Widget *obj = new crop_Widget();
        obj->on_horizontal_Slider_Y_2_sliderReleased();
    } catch (...) {
        qInfo()<<"An error has occured: ";
    }

}


void RTIe_tests::test_on_spin_Box_X_2_valueChanged()
{
    int X = 0;
    try {
        crop_Widget *obj = new crop_Widget();
        obj->on_spin_Box_X_2_valueChanged(X);
    } catch (...) {
        qInfo()<<"An error has occured: ";
    }

}

void RTIe_tests::test_on_spin_Box_Y_2_valueChanged()
{
    int Y = 0;
    try {
        crop_Widget *obj = new crop_Widget();
        obj->on_spin_Box_Y_2_valueChanged(Y);
    } catch (...) {
        qInfo()<<"An error has occured: ";
    }

}

void RTIe_tests::test_on_spin_Box_Height_valueChanged()
{
    int value = 12;
    try {
        crop_Widget *obj = new crop_Widget();
        obj->on_spin_Box_Height_valueChanged(value);
    } catch (...) {
        qInfo()<<"An error has occured: ";
    }

}

void RTIe_tests::test_on_spin_Box_Width_valueChanged()
{

    try {
        int value = 12;
        crop_Widget *obj = new crop_Widget();
        obj->on_spin_Box_Width_valueChanged(value);
    } catch (...) {
        qInfo()<<"An error has occured: ";
    }

}

void RTIe_tests::test_on_horizontal_Slider_X_2_valueChanged()
{

    try {
        int value = 12;
        crop_Widget *obj = new crop_Widget();
        obj->on_horizontal_Slider_X_2_valueChanged(value);
    } catch (...) {
        qInfo()<<"An error has occured: ";
    }

}

void RTIe_tests::test_on_horizontal_Slider_Y_2_valueChanged()
{

    try {
        int value = 12;
        crop_Widget *obj = new crop_Widget();
        obj->on_horizontal_Slider_Y_2_valueChanged(value);
    } catch (...) {
        qInfo()<<"An error has occured: ";
    }

}

void RTIe_tests::test_on_horizontal_Slider_Height_valueChanged()
{

    try {
        int value = 12;
        crop_Widget *obj = new crop_Widget();
        obj->on_horizontal_Slider_Height_valueChanged(value);
    } catch (...) {
        qInfo()<<"An error has occured: ";
    }

}

void RTIe_tests::test_on_horizontal_Slider_Width_valueChanged()
{

    try {
        int value = 12;
        crop_Widget *obj = new crop_Widget();
        obj->on_horizontal_Slider_Width_valueChanged(value);
    } catch (...) {
        qInfo()<<"An error has occured: ";
    }

}

void RTIe_tests::test_on_horizontal_Scroll_Bar_Red_2_valueChanged()
{

    try {
        int value = 12;
        crop_Widget *obj = new crop_Widget();
        obj->on_horizontal_Scroll_Bar_Red_2_valueChanged(value);
    } catch (...) {
        qInfo()<<"An error has occured: ";
    }

}

void RTIe_tests::test_on_horizontal_Scroll_Bar_Green_2_valueChanged()
{

    try {
        int value = 12;
        crop_Widget *obj = new crop_Widget();
        obj->on_horizontal_Scroll_Bar_Green_2_valueChanged(value);
    } catch (...) {
        qInfo()<<"An error has occured: ";
    }

}

void RTIe_tests::test_on_horizontal_Scroll_Bar_Blue_2_valueChanged()
{

    try {
        int value = 12;
        crop_Widget *obj = new crop_Widget();
        obj->on_horizontal_Scroll_Bar_Blue_2_valueChanged(value);
    } catch (...) {
        qInfo()<<"An error has occured: ";
    }

}

void RTIe_tests::test_on_colour_Selector_Button_2_clicked()
{

    try {
        crop_Widget *obj = new crop_Widget();
        obj->on_colour_Selector_Button_2_clicked();
    } catch (...) {
        qInfo()<<"An error has occured: ";
    }

}

void RTIe_tests::test_on_zoom_Reset_Button_2_clicked()
{

    try {
        crop_Widget *obj = new crop_Widget();
        obj->on_zoom_Reset_Button_2_clicked();
    } catch (...) {
        qInfo()<<"An error has occured: ";
    }

}

void RTIe_tests::test_on_zoom_In_Button_2_clicked()
{

    try {
        crop_Widget *obj = new crop_Widget();
        obj->on_zoom_In_Button_2_clicked();
    } catch (...) {
        qInfo()<<"An error has occured: ";
    }

}

void RTIe_tests::test_on_zoom_Out_Button_2_clicked()
{

    try {
        crop_Widget *obj = new crop_Widget();
        obj->on_zoom_Out_Button_2_clicked();
    } catch (...) {
        qInfo()<<"An error has occured: ";
    }

}


//void RTIe_tests::test_Apply_Effect_To_Pixmap()
//{

//    try {
//        crop_Widget *obj = new crop_Widget();
//        obj->apply_Effect_To_Pixmap();
//    } catch (...) {
//        qInfo()<<"An error has occured: ";
//    }

//}


void RTIe_tests::test_on_zoom_Out_Button_2_clicked()
{

    try {
        crop_Widget *obj = new crop_Widget();
        obj->on_zoom_Out_Button_2_clicked();
    } catch (...) {
        qInfo()<<"An error has occured: ";
    }

}


void RTIe_tests::test_on_zoom_Out_Button_2_clicked()
{

    try {
        crop_Widget *obj = new crop_Widget();
        obj->on_zoom_Out_Button_2_clicked();
    } catch (...) {
        qInfo()<<"An error has occured: ";
    }

}


void RTIe_tests::test_on_zoom_Out_Button_2_clicked()
{

    try {
        crop_Widget *obj = new crop_Widget();
        obj->on_zoom_Out_Button_2_clicked();
    } catch (...) {
        qInfo()<<"An error has occured: ";
    }

}


void RTIe_tests::test_on_zoom_Out_Button_2_clicked()
{

    try {
        crop_Widget *obj = new crop_Widget();
        obj->on_zoom_Out_Button_2_clicked();
    } catch (...) {
        qInfo()<<"An error has occured: ";
    }

}


void RTIe_tests::test_on_zoom_Out_Button_2_clicked()
{

    try {
        crop_Widget *obj = new crop_Widget();
        obj->on_zoom_Out_Button_2_clicked();
    } catch (...) {
        qInfo()<<"An error has occured: ";
    }

}


void RTIe_tests::test_on_zoom_Out_Button_2_clicked()
{

    try {
        crop_Widget *obj = new crop_Widget();
        obj->on_zoom_Out_Button_2_clicked();
    } catch (...) {
        qInfo()<<"An error has occured: ";
    }

}


void RTIe_tests::test_on_zoom_Out_Button_2_clicked()
{

    try {
        crop_Widget *obj = new crop_Widget();
        obj->on_zoom_Out_Button_2_clicked();
    } catch (...) {
        qInfo()<<"An error has occured: ";
    }

}


void RTIe_tests::test_on_zoom_Out_Button_2_clicked()
{

    try {
        crop_Widget *obj = new crop_Widget();
        obj->on_zoom_Out_Button_2_clicked();
    } catch (...) {
        qInfo()<<"An error has occured: ";
    }

}


void RTIe_tests::test_on_zoom_Out_Button_2_clicked()
{

    try {
        crop_Widget *obj = new crop_Widget();
        obj->on_zoom_Out_Button_2_clicked();
    } catch (...) {
        qInfo()<<"An error has occured: ";
    }

}


void RTIe_tests::test_on_zoom_Out_Button_2_clicked()
{

    try {
        crop_Widget *obj = new crop_Widget();
        obj->on_zoom_Out_Button_2_clicked();
    } catch (...) {
        qInfo()<<"An error has occured: ";
    }

}


void RTIe_tests::test_on_zoom_Out_Button_2_clicked()
{

    try {
        crop_Widget *obj = new crop_Widget();
        obj->on_zoom_Out_Button_2_clicked();
    } catch (...) {
        qInfo()<<"An error has occured: ";
    }

}


void RTIe_tests::test_on_zoom_Out_Button_2_clicked()
{

    try {
        crop_Widget *obj = new crop_Widget();
        obj->on_zoom_Out_Button_2_clicked();
    } catch (...) {
        qInfo()<<"An error has occured: ";
    }

}


void RTIe_tests::test_on_zoom_Out_Button_2_clicked()
{

    try {
        crop_Widget *obj = new crop_Widget();
        obj->on_zoom_Out_Button_2_clicked();
    } catch (...) {
        qInfo()<<"An error has occured: ";
    }

}


void RTIe_tests::test_on_zoom_Out_Button_2_clicked()
{

    try {
        crop_Widget *obj = new crop_Widget();
        obj->on_zoom_Out_Button_2_clicked();
    } catch (...) {
        qInfo()<<"An error has occured: ";
    }

}


static RTIe_tests rtieInstance;

//QTEST_MAIN(RTIe_tests)

#include "tst_rtie_tests.moc"

