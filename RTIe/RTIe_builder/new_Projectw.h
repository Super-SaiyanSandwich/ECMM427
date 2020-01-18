#ifndef NEW_PROJECTW_H
#define NEW_PROJECTW_H

#include <QWizardPage>

namespace Ui {
class new_Projectw;
}

class new_Projectw : public QWizard
{
    Q_OBJECT

public:
    explicit new_Projectw(QWidget *parent = nullptr);
    ~new_Projectw();

private:
    Ui::new_Projectw *ui;

//private slots:
//    QWizardPage* createIntroPage();
//    QWizardPage* createConclusionPage();
//    QWizardPage* createRegistrationPage();

public slots:
    static void new_projectw_Open_Page();
};

#endif // NEW_PROJECTW_H
