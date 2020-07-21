#ifndef FITTER_WIDGET_H
#define FITTER_WIDGET_H

#include <QListWidget>
#include <QWidget>
#include "QProcess"

namespace Ui {
class fitter_Widget;
}

class fitter_Widget : public QWidget
{
    Q_OBJECT

public:
    explicit fitter_Widget(QWidget *parent = nullptr);
    ~fitter_Widget();

private slots:
    void on_generate_Btn_clicked();
    void on_cancel_fitter_Btn_clicked();
    void on_fitter_Location_clicked();
    void on_lp_Location_clicked();
    void on_output_Location_clicked();
    void on_resize_Checkbox_clicked();
    void on_ptm_Fitter_clicked();
    void on_hsh_Fitter_clicked();
    void on_previous_Image_Btn_clicked();
    void on_next_Image_Btn_clicked();
    void itHasFinished(int arg1, QProcess::ExitStatus arg2); 

private:
    Ui::fitter_Widget *ui;

    QString error_Message(bool hsh);
    QStringList get_File_List();

    int current_Slide = 0;
    QString chosen_Location;
    QString project;
    QImage base_Image;

    QStringList fitter_Args; // list of all arguments
    QString lp_Path;
    QString output_Path;
    QString fitter_Location;
    QString std_Output;
    QString std_Error;

    QString empty_LP;
    QString empty_Fitter;
    QString empty_Output;
    QString empty_Order;
    QString summary;
    QString fitter;
    bool dropdown_Option;
    void result();
};

#endif // FITTER_WIDGET_H
