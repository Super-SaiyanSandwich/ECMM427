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
    void import();
    static QStringList get_Working_Image_Paths();
    void delete_(QList<QListWidgetItem *> image_List);
    virtual ~image_Management_Nui();

private:

};

#endif // IMAGE_MANAGEMENT_NUI_H
