
#include <QCoreApplication>
#include <QtWidgets>
#include <QtTest/QtTest>

#include "test_suite.h"
#include "..\RTIe_builder\crop_Widget.h"
#include "..\RTIe_builder\crop_Widget.ui"

namespace Ui {
class RTIe_tests;
}


// add necessary includes here
ui->horizontalSlider->installEventFilter(new RTIe_tests());
class RTIe_tests : public QObject
{
    Q_OBJECT

public:
//    explicit crop_Widget(QWidget *parent = nullptr, QString base_String = "", QList<QListWidgetItem *> * icons = new QList<QListWidgetItem *>());
//    ~crop_Widget();
    void set_RGB(int r, int g, int b);
    void load_Cropping_File(); //const QString &fileName
//    RTIe_tests();
//    ~RTIe_tests();

private slots:
//    void on_work_Images_itemDoubleClicked(QListWidgetItem *item);

//    void on_cancel_btn_clicked();

//    void on_horizontal_Slider_X_2_sliderReleased();

//    void on_horizontal_Slider_Y_2_sliderReleased();

    void on_crop_btn_clicked();
//    void on_spin_Box_X_2_valueChanged(int X);
//    void on_spin_Box_Y_2_valueChanged(int Y);
//    void on_spin_Box_Height_valueChanged(double value);
//    void on_spin_Box_Width_valueChanged(double value);
//    void on_horizontal_Slider_X_2_valueChanged(int value);
//    void on_horizontal_Slider_Y_2_valueChanged(int value);
//    void on_horizontal_Slider_Height_valueChanged(int value);
//    void on_horizontal_Slider_Width_valueChanged(int value);
//    void on_horizontal_Scroll_Bar_Red_2_valueChanged(int value);
//    void on_horizontal_Scroll_Bar_Green_2_valueChanged(int value);
//    void on_horizontal_Scroll_Bar_Blue_2_valueChanged(int value);
//    void on_colour_Selector_Button_2_clicked();
//    void on_zoom_Reset_Button_2_clicked();
//    void on_zoom_In_Button_2_clicked();
//    void on_zoom_Out_Button_2_clicked();

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
      bool eventFilter(QObject* object, QEvent* event) override
      {
          qDebug() << event->type();

          return QObject::eventFilter(object, event);
      }



};

RTIe_tests::RTIe_tests() :
//    QWidget(parent),
    ui(new Ui::RTIe_tests)
{}

// Testing starts Here

void RTIe_tests::load_Cropping_File()
{
    crop_Widget *obj = new crop_Widget();
    bool result = obj->load_Cropping_File("image1.jpg");
//    qInfo()<<result;
    QCOMPARE(result, true);
}

void RTIe_tests::on_crop_btn_clicked()
{
    QPushButton crop_button;

    crop_button.show();

   crop_button.clicked(false);

    QTest::mouseClick( &crop_button, Qt::LeftButton );
    crop_button.clicked(true);

}

//RTIe_tests::~RTIe_tests()
//{

//}



QTEST_MAIN(RTIe_tests)
#include "tst_rtie_tests.moc"
