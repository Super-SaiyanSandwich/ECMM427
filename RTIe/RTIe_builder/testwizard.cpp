#include "testwizard.h"
#include "ui_testwizard.h"

TestWizard::TestWizard(QWidget *parent) :
    QWizard(parent),
    ui(new Ui::TestWizard)
{
    ui->setupUi(this);
}

TestWizard::~TestWizard()
{
    delete ui;
}
