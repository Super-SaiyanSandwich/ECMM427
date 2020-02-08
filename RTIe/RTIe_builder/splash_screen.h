#ifndef SPLASHSCREEN_H
#define SPLASHSCREEN_H

#include <QMainWindow>
#include <QWidget>
#include "new_Project.h"
#include "new_Project_Wizard.h"
#include "system_ui.h"

class splashScreen : public QMainWindow
{
    Q_OBJECT
public:
    explicit splashScreen(QWidget *parent = nullptr);

private:
    new_Project new_project;
    new_Projectw new_projectw;
    system_Ui home_Page;

signals:

public slots:


private slots:
    void exit_App();
    void help_Button_Clicked();
};


#endif // SPLASHSCREEN_H