#ifndef IMAGE_MANAGEMENT_NUI_H
#define IMAGE_MANAGEMENT_NUI_H

#include <QStringList>

class image_Management_Nui
{
public:
    image_Management_Nui();
    void import();
    QStringList get_Working_Image_Paths();
    void delete_();

private:

};

#endif // IMAGE_MANAGEMENT_NUI_H
