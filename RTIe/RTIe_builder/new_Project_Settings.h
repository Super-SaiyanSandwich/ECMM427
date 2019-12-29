#ifndef NEW_PROJECT_SETTINGS_H
#define NEW_PROJECT_SETTINGS_H

#include <QMainWindow>

class new_Project_Settings : public QMainWindow
{
    Q_OBJECT
public:
    explicit new_Project_Settings(QWidget *parent = nullptr);

signals:

public slots:
   static void new_Project_Settings_Open_Page();


private slots:
   void close_Page();

};

#endif // NEW_PROJECT_SETTINGS_H
