#ifndef DELETION_DIALOG_H
#define DELETION_DIALOG_H

#include <QDialog>
#include <QGraphicsPixmapItem>
#include <QCheckBox>
#include <QTextEdit>
#include <QDialogButtonBox>
#include <QLabel>

namespace Ui {
class deletion_Dialog;
}

class deletion_Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit deletion_Dialog(QWidget *parent = nullptr);
    ~deletion_Dialog();


    //QLabel *image_FName;
    //QString *image_Path;
    //QTextEdit *removal_Text;
    //QCheckBox *apply_All_Check;
    QGraphicsPixmapItem *image_Preview_Pixmap;
    QGraphicsScene *image_Preview_Scene;


private:
    Ui::deletion_Dialog *ui;

    QStringList working_Image_Names_List;

    int current_Image_Index;
    QString current_Image_Name;
    QString reason_Delete_Text;

    int dialog_Status_Code;
    int apply_All_Check_Status;
    //Image and reason lists are linked by indexes.
    QStringList image_Delete_List;
    QStringList reason_Delete_List;


protected:
    void showEvent(QShowEvent *);

public slots:
    int process_Images(QStringList image_Names);

private slots:
    void on_next_Image_Button_clicked();
    void on_previous_Image_Button_clicked();
    void on_buttonBox_accepted();
    void on_buttonBox_rejected();
    void update_Preview();
    void on_delete_Button_clicked();
    void on_apply_All_stateChanged(int arg1);
    void update_Remaining_Image_List();
};

#endif // DELETION_DIALOG_H
