#ifndef IMAGE_MANAGEMENT_H
#define IMAGE_MANAGEMENT_H

#include <QMainWindow>
#include <QLabel>

namespace Ui {
    class image_Management;
}

class image_Management : public QMainWindow
{
    Q_OBJECT
public:
    explicit image_Management(QWidget *parent = nullptr);
    ~image_Management();

private:
    Ui::image_Management *Ui;
    QImage image;
    QLabel *image_Label;

signals:

private slots:
    static void import();
    static void read(QString wd);
    static void update();
    static void remove();

};

#endif // IMAGE_MANAGEMENT_H
