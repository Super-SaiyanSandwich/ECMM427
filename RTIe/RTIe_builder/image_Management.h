#ifndef IMAGE_MANAGEMENT_H
#define IMAGE_MANAGEMENT_H

#include <QMainWindow>

class image_Management : public QMainWindow
{
    Q_OBJECT
public:
    explicit image_Management(QWidget *parent = nullptr);

signals:


private slots:
    void import();
    void read(QString wd);
    void update();
    void remove();

};

#endif // IMAGE_MANAGEMENT_H
