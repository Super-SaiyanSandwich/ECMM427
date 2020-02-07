#ifndef SPLASHSCREEN_H
#define SPLASHSCREEN_H

#include <QMainWindow>
#include <QWidget>
#include "new_Project.h"
//#include "new_Project_Wizard.h"

class splashScreen : public QMainWindow
{
    Q_OBJECT
public:
    explicit splashScreen(QWidget *parent = nullptr);

private:
    new_Project new_project;
<<<<<<< HEAD
    new_Project_Wizard new_project_wizard;
=======
    //new_Projectw new_projectw;
>>>>>>> image_Manipulation_projectw_broken

signals:

public slots:


private slots:
    void exit_App();
    void help_Button_Clicked();
};


#endif // SPLASHSCREEN_H
