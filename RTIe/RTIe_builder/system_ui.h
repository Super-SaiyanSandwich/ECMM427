#ifndef SYSTEM_UI_H
#define SYSTEM_UI_H

#include <QMainWindow>
#include <QListWidgetItem>

namespace Ui {
class system_Ui;
}

class system_Ui : public QMainWindow
{
    Q_OBJECT

public:
    explicit system_Ui(QWidget *parent = nullptr);
    ~system_Ui();


private slots:
    void image_Display();

    void open_Homepage();

    void on_btn5_clicked();

    void on_btn2_clicked();

    void on_btn1_clicked();

    void on_btn3_clicked();

    void on_btn2_2_clicked();

    void on_btn4_clicked();

    void on_btn3_2_clicked();

    void on_btn5_2_clicked();

    void on_btn4_2_clicked();

    void on_btn1_2_clicked();

    void on_listWidget_itemClicked(QListWidgetItem *item);

private:
    Ui::system_Ui *ui;
};

#endif // SYSTEM_UI_H
