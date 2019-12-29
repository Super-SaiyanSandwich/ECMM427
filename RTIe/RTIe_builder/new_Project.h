#ifndef NEW_PROJECT_H
#define NEW_PROJECT_H

#include <QMainWindow>
#include <QWidget>
#include <QLineEdit>

#include <new_Project_Settings.h>

class new_Project : public QMainWindow
{
    Q_OBJECT
public:
    explicit new_Project(QWidget *parent = nullptr);

private:
    new_Project_Settings new_project_settings;

signals:


public slots:
   static void new_Project_Open_Page();



private slots:
   void close_Page();
   void open_Location_Select();
   void next_Page();


private:
    //QLineEdit *project_Location;
    //QLineEdit *project_Name = nullptr;


};

#endif // NEW_PROJECT_H
