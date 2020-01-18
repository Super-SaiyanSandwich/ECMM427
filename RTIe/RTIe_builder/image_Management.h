#ifndef IMAGE_MANAGEMENT_H
#define IMAGE_MANAGEMENT_H

#include <QMainWindow>
#include <QLabel>
#include <QPushButton>
#include <QAction>

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
    QAction action_Import;
    QLabel *action_Import_Label;

    QPushButton import_Button;
    QLabel *import_Button_Label;

signals:

public slots:
    void import();
    void read(QString wd);
    void update();
    void remove();

};

#endif // IMAGE_MANAGEMENT_H
