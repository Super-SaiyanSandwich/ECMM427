#include <QApplication>
#include <QPushButton>
#include <QLabel>
#include <image_Management.h>

#include "splash_Screen.h"

int main(int argc, char **argv)
{
    QApplication app (argc, argv);
    //splashScreen splashScreen;
    //splashScreen.show();
    image_Management image_Management;
    image_Management.show();
    return app.exec();
}


