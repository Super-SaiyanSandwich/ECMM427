#ifndef PTM_FITTER_H
#define PTM_FITTER_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class ptm_fitter; }
QT_END_NAMESPACE

class ptm_fitter : public QMainWindow
{
    Q_OBJECT

public:
    ptm_fitter(QWidget *parent = nullptr);
    ~ptm_fitter();

private slots:
    void on_pushButton_clicked();

//    void on_radioButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::ptm_fitter *ui;
};
#endif // PTM_FITTER_H
