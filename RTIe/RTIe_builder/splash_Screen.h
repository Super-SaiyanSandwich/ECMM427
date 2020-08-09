#ifndef SPLASHSCREEN_H
#define SPLASHSCREEN_H

#include <QMainWindow>
#include <QWidget>
#include "new_Project.h"
#include "project_Wizard.h"
#include "system_ui.h"

class splashScreen : public QMainWindow
{
    Q_OBJECT
public:
    explicit splashScreen(QWidget *parent = nullptr);
    static QString project_Path;
    static QString project_Name;

private:
    new_Project new_project;
    project_Wizard create_project_wizard;
    system_Ui open_Existing_Project;

signals:

public slots:


private slots:
    void exit_App();
    void help_Button_Clicked();
};


#endif // SPLASHSCREEN_H
