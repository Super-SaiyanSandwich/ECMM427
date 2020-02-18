#ifndef PROJECT_WIZARD_H
#define PROJECT_WIZARD_H

#include <QPushButton>
#include <QLabel>
#include <QWizardPage>
#include <QWizard>
#include <QAction>
#include <QPushButton>
#include <QLabel>

namespace Ui {
class project_Wizard;
}

class project_Wizard : public QWizard
{
    Q_OBJECT

public:
    explicit project_Wizard(QWidget *parent = nullptr);
    ~project_Wizard();

private:
    Ui::project_Wizard *ui;

    QPushButton choose_Dialog;
    QLabel *choose_Dialog_Label;

    QString project_Name;
    //QString verification_Path;

public slots:
    static void create_Project_Wizard();

private slots:
    void choose_Project_Directory();
    void create_Project();

};

#endif // project_Wizard_H
