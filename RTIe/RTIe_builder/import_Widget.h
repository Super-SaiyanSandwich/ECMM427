#ifndef IMPORT_WIDGET_H
#define IMPORT_WIDGET_H

#include <QGraphicsPixmapItem>
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

    QString get_Select();
    QList<QListWidgetItem *> * get_List();

private:
    QGraphicsPixmapItem *preview_Item;
    QGraphicsScene *scene;

    Ui::import_Widget *ui;
    void image_Display();
    void reset_Image_Zoom();
    QStringList get_File_List();
    bool first_Load = true;

protected:
    void showEvent(QShowEvent *ev);
private slots:
    void on_listWidget_itemClicked(QListWidgetItem *item);
    void on_import_btn_clicked();
    void on_delete_Btn_clicked();
    void add_Item_To_List(QImage image, QString filename);
};

#endif // IMPORT_WIDGET_H
