#ifndef IMPORT_WIDGET_H
#define IMPORT_WIDGET_H

#include <QListWidgetItem>
#include <QWidget>

namespace Ui {
class import_Widget;
}

class import_Widget : public QWidget
{
    Q_OBJECT

public:
    explicit import_Widget(QWidget *parent = nullptr);
    ~import_Widget();

private:
    Ui::import_Widget *ui;
    void image_Display();

protected:
    void showEvent(QShowEvent *ev);
private slots:
    void on_listWidget_itemClicked(QListWidgetItem *item);
    void on_import_btn_clicked();
    void on_delete_Btn_clicked();
};

#endif // IMPORT_WIDGET_H
