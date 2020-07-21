#ifndef SYSTEM_UI_H
#define SYSTEM_UI_H

#include <QMainWindow>
#include <QListWidgetItem>
#include <QLabel>
#include <QLineEdit>
#include <QListWidget>
#include <QFile>
#include <QGraphicsScene>
#include <QGraphicsPixmapItem>
#include <QComboBox>

#include <QBasicTimer>
#include <QList>
#include <QImage>
#include <QDir>
#include <QPainter>
#include <QPaintEvent>
#include <QProgressBar>

#include "cropped_area.h"

namespace Ui {
class system_Ui;
class crop_image;
}

class system_Ui : public QMainWindow
{
    Q_OBJECT

public:
    explicit system_Ui(QWidget *parent = nullptr);
    ~system_Ui();
    static void start();
//    static QListWidget listWidget;
//    static QListWidget listWidget_3;
//    QString chosen_Location;
//    QString project;
//    QImage base_Image;
//    void set_RGB(int r, int g, int b);

//    int current_Slide = 0;

//    QStringList fitter_Args; // list of all arguments
//    QString lp_Path;
//    QString output_Path;
//    QString fitter_Location;
//    QString std_Output;
//    QString std_Error;

//    QString empty_LP;
//    QString empty_Fitter;
//    QString empty_Output;
//    QString empty_Order;
//    QString summary;
//    QString fitter;
//    bool dropdown_Option;










signals:
    void inputReceived();

private slots:


    void open_Selected_Project();

    void on_marble_Detection_Btn_clicked();

    void on_remove_Marble_Btn_clicked();

    void on_export_Btn_clicked();

    void on_image_Management_Btn_clicked();



    void on_action_New_Project_2_triggered();

    void on_action_Open_Project_2_triggered();

    void on_action_Exit_2_triggered();

    void on_actionRtiEx_Wiki_triggered();

private:
//    marble_Detection marbles;

    Ui::system_Ui *ui;




//    QFile lp_File;

    int marbleDetectionIndex = 0;
    int removeMarbleIndex = 0;
    int exportIndex = 0;


};

#endif // SYSTEM_UI_H
