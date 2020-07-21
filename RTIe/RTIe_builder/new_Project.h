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
    QString project_Name;
    QString editor;

private:
    QString project_Location;


public slots:
   static void new_Project_Open_Page();
   void update_Edit_Boxes(QString project_Location, QString project_Name, QString editor);


private slots:
   void close_Page();
   void open_Location_Select();
   void next_Page();



};

#endif // NEW_PROJECT_H
