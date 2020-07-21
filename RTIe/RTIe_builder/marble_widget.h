#ifndef MARBLE_WIDGET_H
#define MARBLE_WIDGET_H

#include <QWidget>
#include <QLabel>
#include <QScrollBar>
#include <QListWidgetItem>
#include <QGraphicsScene>
#include <QGraphicsPixmapItem>
#include "marble.h"

namespace Ui {
class marble_Widget;
}

class marble_Widget : public QWidget
{
    Q_OBJECT

public:
    explicit marble_Widget(QWidget *parent = nullptr, QString base_String = "", QList<QListWidgetItem *> * icons = new QList<QListWidgetItem *>());
    ~marble_Widget();
    bool load_File(const QString &);
    void set_RGB(int r, int g, int b);

private:
    Ui::marble_Widget *ui;

    QGraphicsScene *marble_Selection_Screen;
    QGraphicsPixmapItem *base_Image;
    QList<QListWidgetItem *> * icons;

    marble *selected_Marble;
    QList<marble*> marble_List;


    int thread_Count = 0;

    int zoom_Percentage = 100;

    bool invert_Selector = false;

    void update_Main_Image();
    void update_Preview_Image();
    QPixmap * generate_Preview_Image(QPixmap source);
    void inverted_Marker();
    QImage applyEffectToImage(QImage src, QGraphicsEffect *effect, int extent = 0);
    QPixmap applyEffectToImage(QPixmap src, QGraphicsEffect *effect, int extent = 0);
    void reset_Image_Zoom();
    void image_Zoom(int percent);
    void adjust_Scroll_Bar(QScrollBar *scrollBar, double factor);
    void set_Maximums();
    QString load_Image_Icons();
    QString detect_Reflection(QImage marble);

    bool eventFilter(QObject *object, QEvent *event);
    bool first_Load = true;

protected:
    void showEvent(QShowEvent *ev);


private slots:
    void on_spin_Box_X_valueChanged(int X);
    void on_spin_Box_Y_valueChanged(int arg1);
    void on_spin_Box_Radius_valueChanged(double arg1);
    void on_horizontal_Slider_X_valueChanged(int value);
    void on_horizontal_Slider_Y_valueChanged(int value);
    void on_horizontal_Scroll_Bar_Red_valueChanged(int value);
    void on_horizontal_Scroll_Bar_Green_valueChanged(int value);
    void on_horizontal_Scroll_Bar_Blue_valueChanged(int value);
    void on_colour_Selector_Button_clicked();
    void on_horizontal_Slider_Radius_valueChanged(int value);
    void on_open_Button_clicked();
    void on_zoom_Reset_Button_clicked();
    void on_zoom_In_Button_clicked();
    void on_zoom_Out_Button_clicked();
    void on_test_Button_clicked();
    void add_Item_To_List(const QImage image, const QString filename);
    void on_listWidget_itemDoubleClicked(QListWidgetItem *item);
    void on_swap_Button_clicked();
    void on_horizontal_Slider_X_sliderReleased();
    void on_horizontal_Slider_Y_sliderReleased();
    void on_checkBox_stateChanged(int arg1);
    void on_listWidget_2_itemDoubleClicked(QListWidgetItem *item);
    void on_add_Marble_Button_clicked();
    void on_remove_Marble_Button_clicked();
};

#endif // MARBLE_WIDGET_H
