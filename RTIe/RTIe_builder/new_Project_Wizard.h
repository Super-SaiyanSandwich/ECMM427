#ifndef NEW_PROJECTW_H
#define NEW_PROJECTW_H

#include <QPushButton>
#include <QLabel>
#include <QWizardPage>
#include <QAction>
#include <QPushButton>
#include <QLabel>

namespace Ui {
class new_Project_Wizard;
}

class new_Project_Wizard : public QWizard
{
    Q_OBJECT

public:
    explicit new_Project_Wizard(QWidget *parent = nullptr);
    ~new_Project_Wizard();

private:
    Ui::new_Project_Wizard *ui;

    QPushButton choose_Dialog;
    QLabel *choose_Dialog_Label;

private slots:
      void choose_Project_Directory();
//    QWizardPage* createIntroPage();
//    QWizardPage* createConclusionPage();
//    QWizardPage* createRegistrationPage();

public slots:
    static void new_Project_Wizard_Open_Page();
    void create_Project_Path(QString project_Name);
};

#endif // NEW_PROJECTW_H
