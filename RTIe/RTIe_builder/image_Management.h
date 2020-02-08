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

    QString project_Location = "/Users/jordan/Network Drives/Git/ECMM427/jordan_test_dir/project" ;//new_Project_Settings::project_Location;
    QString source_Directory = project_Location + "/images/src";
    QString working_Directory = project_Location + "/images/wd";
    static QStringList get_Working_Image_Paths(QString wd);

private:
    Ui::image_Management *Ui;
    QAction action_Import;
    QLabel *action_Import_Label;

    QPushButton import_Button;
    QLabel *import_Button_Label;

    QPushButton delete_Button;
    QLabel *delete_Button_Label;

signals:

public slots:
    void import();
    void read(QString wd);
    void update();
    void remove();


};

#endif // IMAGE_MANAGEMENT_H
