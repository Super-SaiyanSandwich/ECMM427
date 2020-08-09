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


//    QRectF boundingRect();
//    void paint();//QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget = nullptr) override;

    void test_set_and_get_Position();//qreal x, qreal y); std::tuple<int, int> get_Position();
    void test_set_Colour();//int r, int g, int b);
    void test_set_Colour1();//QColor colour);
    void test_set_R();//int r);
    void test_set_G();//int g);
    void test_set_B();//int b);
    void test_set_and_get_Height();//qreal height);
    void test_set_and_get_Width();//qreal width);
//    void test_set_Selected();//bool selected);


//    qreal test_get_Width();
//    qreal test_get_Height();
//    QColor test_get_Colour();


};



// Testing starts Here

void RTIe_tests::test_load_Cropping_File()
{
    const QString filename = ":/test.png";
    crop_Widget *obj = new crop_Widget();
    bool result = obj->load_Cropping_File(filename);
    QCOMPARE(result, true);
}

void RTIe_tests::test_set_and_get_Position()
{
//    QPushButton crop_button;

//    crop_button.show();

//   crop_button.clicked(false);

//    QTest::mouseClick( &crop_button, Qt::LeftButton );
//    crop_button.clicked(true);
    try {
        qreal x = 5 ;
        qreal y = 5 ;
        cropped_Area *obj = new cropped_Area();
        obj->set_Position(x,y);
        std::tuple<qreal, qreal> result = obj->get_Position();
        qreal res_x = std::get<0>(result);
        qreal res_y = std::get<1>(result);

        QCOMPARE(res_x,5);
        QCOMPARE(res_y,5);
    } catch (...) {
        qInfo()<<"An error has occured: ";
    }

}

void RTIe_tests::test_set_Colour()
{

    try {
        int r = 200;
        int g = 100;
        int b = 5;
        cropped_Area *obj = new cropped_Area();
        obj->set_Colour(r,g,b);
        QColor result = obj->get_Colour();
        QCOMPARE(result,QColor::fromRgb(200,100,5));
    } catch (...) {
        qInfo()<<"An error has occured: ";
    }

}

void RTIe_tests::test_set_Colour1()
{
  try { //GOOD
        QColor colour = Qt::blue;
        cropped_Area *obj = new cropped_Area();
        obj->set_Colour(colour);
        QColor result = obj->get_Colour();
        QCOMPARE(result,Qt::blue);
    } catch (...) {
        qInfo()<<"An error has occured: ";
    }
//    try { //BAD
//          QListWidgetItem *newItem = new QListWidgetItem;
//          newItem->setText("");
//          crop_Widget *obj = new crop_Widget();
//          obj->on_work_Images_itemDoubleClicked(newItem);
//      } catch (...) {
//          qInfo()<<"An error has occured: ";
//      }

}


void RTIe_tests::test_set_R()
{
    try {
        int r = 12;
        cropped_Area *obj = new cropped_Area();
        obj->set_R(r);
        QCOMPARE(QColor().red(),12 );
    } catch (...) {
        qInfo()<<"An error has occured: ";
    }
}




void RTIe_tests::test_set_G()
{
    try {
        int g =10;
        cropped_Area *obj = new cropped_Area();
        obj->set_G(g);
        QCOMPARE(QColor().green(),10 );
    } catch (...) {
        qInfo()<<"An error has occured: ";
    }

}

void RTIe_tests::test_set_B()
{
    try {
        int b = 84;
        cropped_Area *obj = new cropped_Area();
        obj->set_R(b);
        QCOMPARE(QColor().blue(),84 );
    } catch (...) {
        qInfo()<<"An error has occured: ";
    }
}


void RTIe_tests::test_set_and_get_Height()
{
    int X = 0;
    try {
        cropped_Area *obj = new cropped_Area();
        obj->set_Height(X);
        qreal result = obj->get_Height();
        QCOMPARE(result,0);
    } catch (...) {
        qInfo()<<"An error has occured: ";
    }

}

void RTIe_tests::test_set_and_get_Width()
{
    int Y = 0;
    try {
        cropped_Area *obj = new cropped_Area();
        obj->set_Width(Y);
        qreal result = obj->get_Width();
        QCOMPARE(result,0);
    } catch (...) {
        qInfo()<<"An error has occured: ";
    }

}

//void RTIe_tests::test_set_Selected()
//{
//    int value = 12;
//    try {
//        crop_Widget *obj = new crop_Widget();
//        obj->on_spin_Box_Height_valueChanged(value);
//    } catch (...) {
//        qInfo()<<"An error has occured: ";
//    }

//}



//void RTIe_tests::test_on_horizontal_Slider_X_2_valueChanged()
//{

//    try {
//        int value = 12;
//        crop_Widget *obj = new crop_Widget();
//        obj->on_horizontal_Slider_X_2_valueChanged(value);
//    } catch (...) {
//        qInfo()<<"An error has occured: ";
//    }

//}

//void RTIe_tests::test_on_horizontal_Slider_Y_2_valueChanged()
//{

//    try {
//        int value = 12;
//        crop_Widget *obj = new crop_Widget();
//        obj->on_horizontal_Slider_Y_2_valueChanged(value);
//    } catch (...) {
//        qInfo()<<"An error has occured: ";
//    }

//}

//void RTIe_tests::test_on_horizontal_Slider_Height_valueChanged()
//{

//    try {
//        int value = 12;
//        crop_Widget *obj = new crop_Widget();
//        obj->on_horizontal_Slider_Height_valueChanged(value);
//    } catch (...) {
//        qInfo()<<"An error has occured: ";
//    }

//}

//void RTIe_tests::test_on_horizontal_Slider_Width_valueChanged()
//{

//    try {
//        int value = 12;
//        crop_Widget *obj = new crop_Widget();
//        obj->on_horizontal_Slider_Width_valueChanged(value);
//    } catch (...) {
//        qInfo()<<"An error has occured: ";
//    }

//}

//void RTIe_tests::test_on_horizontal_Scroll_Bar_Red_2_valueChanged()
//{

//    try {
//        int value = 12;
//        crop_Widget *obj = new crop_Widget();
//        obj->on_horizontal_Scroll_Bar_Red_2_valueChanged(value);
//    } catch (...) {
//        qInfo()<<"An error has occured: ";
//    }

//}

//void RTIe_tests::test_on_horizontal_Scroll_Bar_Green_2_valueChanged()
//{

//    try {
//        int value = 12;
//        crop_Widget *obj = new crop_Widget();
//        obj->on_horizontal_Scroll_Bar_Green_2_valueChanged(value);
//    } catch (...) {
//        qInfo()<<"An error has occured: ";
//    }

//}

//void RTIe_tests::test_on_horizontal_Scroll_Bar_Blue_2_valueChanged()
//{

//    try {
//        int value = 12;
//        crop_Widget *obj = new crop_Widget();
//        obj->on_horizontal_Scroll_Bar_Blue_2_valueChanged(value);
//    } catch (...) {
//        qInfo()<<"An error has occured: ";
//    }

//}

//void RTIe_tests::test_on_colour_Selector_Button_2_clicked()
//{

//    try {
//        crop_Widget *obj = new crop_Widget();
//        obj->on_colour_Selector_Button_2_clicked();
//    } catch (...) {
//        qInfo()<<"An error has occured: ";
//    }

//}

//void RTIe_tests::test_on_zoom_Reset_Button_2_clicked()
//{

//    try {
//        crop_Widget *obj = new crop_Widget();
//        obj->on_zoom_Reset_Button_2_clicked();
//    } catch (...) {
//        qInfo()<<"An error has occured: ";
//    }

//}

//void RTIe_tests::test_on_zoom_In_Button_2_clicked()
//{

//    try {
//        crop_Widget *obj = new crop_Widget();
//        obj->on_zoom_In_Button_2_clicked();
//    } catch (...) {
//        qInfo()<<"An error has occured: ";
//    }

//}

//void RTIe_tests::test_on_zoom_Out_Button_2_clicked()
//{

//    try {
//        crop_Widget *obj = new crop_Widget();
//        obj->on_zoom_Out_Button_2_clicked();
//    } catch (...) {
//        qInfo()<<"An error has occured: ";
//    }

//}


////void RTIe_tests::test_Apply_Effect_To_Pixmap()
////{

////    try {
////        crop_Widget *obj = new crop_Widget();
////        obj->apply_Effect_To_Pixmap();
////    } catch (...) {
////        qInfo()<<"An error has occured: ";
////    }

////}


//void RTIe_tests::test_on_zoom_Out_Button_2_clicked()
//{

//    try {
//        crop_Widget *obj = new crop_Widget();
//        obj->on_zoom_Out_Button_2_clicked();
//    } catch (...) {
//        qInfo()<<"An error has occured: ";
//    }

//}


//void RTIe_tests::test_on_zoom_Out_Button_2_clicked()
//{

//    try {
//        crop_Widget *obj = new crop_Widget();
//        obj->on_zoom_Out_Button_2_clicked();
//    } catch (...) {
//        qInfo()<<"An error has occured: ";
//    }

//}


//void RTIe_tests::test_on_zoom_Out_Button_2_clicked()
//{

//    try {
//        crop_Widget *obj = new crop_Widget();
//        obj->on_zoom_Out_Button_2_clicked();
//    } catch (...) {
//        qInfo()<<"An error has occured: ";
//    }

//}


//void RTIe_tests::test_on_zoom_Out_Button_2_clicked()
//{

//    try {
//        crop_Widget *obj = new crop_Widget();
//        obj->on_zoom_Out_Button_2_clicked();
//    } catch (...) {
//        qInfo()<<"An error has occured: ";
//    }

//}


//void RTIe_tests::test_on_zoom_Out_Button_2_clicked()
//{

//    try {
//        crop_Widget *obj = new crop_Widget();
//        obj->on_zoom_Out_Button_2_clicked();
//    } catch (...) {
//        qInfo()<<"An error has occured: ";
//    }

//}


//void RTIe_tests::test_on_zoom_Out_Button_2_clicked()
//{

//    try {
//        crop_Widget *obj = new crop_Widget();
//        obj->on_zoom_Out_Button_2_clicked();
//    } catch (...) {
//        qInfo()<<"An error has occured: ";
//    }

//}


//void RTIe_tests::test_on_zoom_Out_Button_2_clicked()
//{

//    try {
//        crop_Widget *obj = new crop_Widget();
//        obj->on_zoom_Out_Button_2_clicked();
//    } catch (...) {
//        qInfo()<<"An error has occured: ";
//    }

//}


//void RTIe_tests::test_on_zoom_Out_Button_2_clicked()
//{

//    try {
//        crop_Widget *obj = new crop_Widget();
//        obj->on_zoom_Out_Button_2_clicked();
//    } catch (...) {
//        qInfo()<<"An error has occured: ";
//    }

//}


//void RTIe_tests::test_on_zoom_Out_Button_2_clicked()
//{

//    try {
//        crop_Widget *obj = new crop_Widget();
//        obj->on_zoom_Out_Button_2_clicked();
//    } catch (...) {
//        qInfo()<<"An error has occured: ";
//    }

//}


//void RTIe_tests::test_on_zoom_Out_Button_2_clicked()
//{

//    try {
//        crop_Widget *obj = new crop_Widget();
//        obj->on_zoom_Out_Button_2_clicked();
//    } catch (...) {
//        qInfo()<<"An error has occured: ";
//    }

//}


//void RTIe_tests::test_on_zoom_Out_Button_2_clicked()
//{

//    try {
//        crop_Widget *obj = new crop_Widget();
//        obj->on_zoom_Out_Button_2_clicked();
//    } catch (...) {
//        qInfo()<<"An error has occured: ";
//    }

//}


//void RTIe_tests::test_on_zoom_Out_Button_2_clicked()
//{

//    try {
//        crop_Widget *obj = new crop_Widget();
//        obj->on_zoom_Out_Button_2_clicked();
//    } catch (...) {
//        qInfo()<<"An error has occured: ";
//    }

//}


//void RTIe_tests::test_on_zoom_Out_Button_2_clicked()
//{

//    try {
//        crop_Widget *obj = new crop_Widget();
//        obj->on_zoom_Out_Button_2_clicked();
//    } catch (...) {
//        qInfo()<<"An error has occured: ";
//    }

//}


//void RTIe_tests::test_on_zoom_Out_Button_2_clicked()
//{

//    try {
//        crop_Widget *obj = new crop_Widget();
//        obj->on_zoom_Out_Button_2_clicked();
//    } catch (...) {
//        qInfo()<<"An error has occured: ";
//    }

//}


static RTIe_tests rtieInstance;

QTEST_MAIN(RTIe_tests)

#include "tst_rtie_tests.moc"

