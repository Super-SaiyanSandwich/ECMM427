#ifndef PROJECT_WIZARD_H
#define PROJECT_WIZARD_H

#include <QPushButton>
#include <QLabel>
#include <QWizardPage>
#include <QWizard>
#include <QAction>
#include <QPushButton>
#include <QLabel>
#include "system_ui.h"

namespace Ui {
class project_Wizard;
}

class project_Wizard : public QWizard
{
    Q_OBJECT

public:
    explicit project_Wizard(QWidget *parent = nullptr);
    ~project_Wizard();
    static QString editor_Name;
    static QString valid;


private:
    Ui::project_Wizard *ui;

    QPushButton choose_Dialog;
    QLabel *choose_Dialog_Label;

    QString project_Name;
    QString verification_Path = ".";

public slots:
    static void create_Project_Wizard();

private slots:
    void choose_Project_Directory();
    void create_Project();

    void on_project_Name_Line_Edit_textChanged(const QString &arg1);
//    void on_choose_Dialog_clicked();
};

#endif // project_Wizard_H
