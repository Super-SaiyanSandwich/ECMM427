#ifndef NEW_PROJECTW_H
#define NEW_PROJECTW_H

#include <QPushButton>
#include <QLabel>
#include <QWizardPage>

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



//private slots:
//    QWizardPage* createIntroPage();
//    QWizardPage* createConclusionPage();
//    QWizardPage* createRegistrationPage();

public slots:
    static void new_Project_Wizard_Open_Page();
    void select_Project_Path();
};

#endif // NEW_PROJECTW_H
