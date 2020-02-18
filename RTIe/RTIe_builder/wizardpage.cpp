#include "wizardpage.h"
#include "ui_wizardpage.h"

WizardPage::WizardPage(QWidget *parent) :
    QWizardPage(parent),
    ui(new Ui::WizardPage)
{
    ui->setupUi(this);
}

WizardPage::~WizardPage()
{
    delete ui;
}
