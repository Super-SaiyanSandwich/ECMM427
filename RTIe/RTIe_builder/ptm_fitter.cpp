#include "ptm_fitter.h"
#include "ui_ptm_fitter.h"
#include <QFileDialog>


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



    system(qPrintable(ptm_Path));
}



void ptm_fitter::on_pushButton_2_clicked()
{
    QApplication::exit();
}

void ptm_fitter::on_pushButton_3_clicked()
{
    QFileDialog dialog(this);
    dialog.setNameFilter("*.exe *.EXE");
    dialog.setFileMode(QFileDialog::ExistingFile);
    ptm_Path = dialog.directory().path();
}
