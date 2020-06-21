#ifndef NEW_PROJECT_SETTINGS_H
#define NEW_PROJECT_SETTINGS_H

#include <QMainWindow>

class new_Project_Settings : public QMainWindow
{
    Q_OBJECT
public:
    explicit new_Project_Settings(QWidget *parent = nullptr);
    QString project_Location;
    QString editor;

private:

    QString project_Name;

signals:

public slots:
   static void new_Project_Settings_Open_Page(QString project_Location, QString project_Name,QString editor);


private slots:
   void close_Page();
   void back_Trigger();
   void create_Project();

};

#endif // NEW_PROJECT_SETTINGS_H
