#ifndef STACKEDEXAMPLE_H
#define STACKEDEXAMPLE_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class stackedExample; }
QT_END_NAMESPACE

class stackedExample : public QMainWindow
{
    Q_OBJECT

public:
    stackedExample(QWidget *parent = nullptr);
    ~stackedExample();

private:
    Ui::stackedExample *ui;

private slots:
    void open_Homepage();

    void on_btn_page2_clicked();

    void on_btn_page5_clicked();

    void on_btn_page3_clicked();

    void on_btn_page1_clicked();

    void on_btn_page4_clicked();

    void on_btn_page2_2_clicked();

    void on_btn_page5_2_clicked();

    void on_btn_page3_2_clicked();

    void on_btn_page1_2_clicked();

    void on_btn_page4_2_clicked();
};
#endif // STACKEDEXAMPLE_H
