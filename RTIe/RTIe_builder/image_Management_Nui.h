#ifndef IMAGE_MANAGEMENT_NUI_H
#define IMAGE_MANAGEMENT_NUI_H

#include <QStringList>
#include <QList>
#include <QListWidgetItem>
#include <QMainWindow>

class image_Management_Nui: public QMainWindow
{
    Q_OBJECT
public:
    image_Management_Nui();
    static void import(QWidget* main);
    static QStringList get_Working_Image_Paths();
    static void delete_(QStringList file_Names);
    virtual ~image_Management_Nui();

private:

};

#endif // IMAGE_MANAGEMENT_NUI_H
