#ifndef MARBLE_DETECTION_H
#define MARBLE_DETECTION_H

#include <QMainWindow>
#include <QWidget>
#include <QLabel>

namespace Ui {
class marble_Detection;
}


class marble_Detection : public QMainWindow
{
    Q_OBJECT
public:
    explicit marble_Detection(QWidget *parent = nullptr);
    ~marble_Detection();
    bool load_File(const QString &);


private:
    Ui::marble_Detection *ui;
    QImage base_Image;
    QLabel *image_Label;

    int x;
    int y;
    double radius;

    int r = 0;
    int g = 255;
    int b = 0;

    void update_Marble_Marker();

signals:

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
    void on_pushButton_clicked();
};

#endif // MARBLE_DETECTION_H
