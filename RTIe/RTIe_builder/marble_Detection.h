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


private:
    Ui::marble_Detection *ui;
    QImage base_Image;
    QLabel *image_Label;

    int x;
    int y;
    double radius;

    void update_Marble_Marker();

signals:

private slots:
    void on_spin_Box_X_valueChanged(int X);
    void on_spin_Box_Y_valueChanged(int arg1);
    void on_spin_Box_Radius_valueChanged(double arg1);
    void on_horizontal_Slider_X_valueChanged(int value);
    void on_horizontal_Slider_Y_valueChanged(int value);
    void on_colour_Selector_Button_triggered(QAction *arg1);
};

#endif // MARBLE_DETECTION_H
