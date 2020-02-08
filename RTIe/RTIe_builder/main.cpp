#include <QApplication>
#include <QPushButton>
#include <QLabel>

#include "splash_Screen.h"
#include "image_Management.h"
#include "new_Project_Wizard.h"

int main(int argc, char **argv)
{
    QApplication app (argc, argv);

    //PREVIEW SPLASH SCREEN & PROJECT WIZARD
    //splashScreen splashScreen;
    //splashScreen.show();

    //PREVIEW IMAGE MANAMGEMENT
    image_Management img;
    img.show();

    return app.exec();
}


