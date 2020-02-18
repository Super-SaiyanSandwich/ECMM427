#include "ptm_fitter.h"
#include "ui_ptm_fitter.h"

ptm_fitter::ptm_fitter(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::ptm_fitter)
{
    ui->setupUi(this);
}

ptm_fitter::~ptm_fitter()
{
    delete ui;
}


void ptm_fitter::on_pushButton_clicked()
{
//    QString lp_path = ;
    system(":/GitHub/ECMM427/RTIe/fitter/PTMfitter.exe");
}



void ptm_fitter::on_pushButton_2_clicked()
{
    QApplication::exit();
}
