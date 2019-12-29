#include <QApplication>
#include <QPushButton>
#include <QLabel>

#include "splash_screen.h"

int main(int argc, char **argv)
{
    QApplication app (argc, argv);
    splashScreen splashScreen;
    splashScreen.show();
    return app.exec();
}


