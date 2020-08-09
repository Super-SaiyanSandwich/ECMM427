#include <QApplication>
#include <QPushButton>
#include <QLabel>
#include <QStyle>
#include <QDesktopWidget>

#include "splash_Screen.h"
#include "image_Management.h"
#include "new_Project_Wizard.h"
#include "project_Wizard.h"

static int const RESTART_EXIT_CODE = -123456789;

int main(int argc, char **argv)
{
    int current_Exit_Code = 0;

    do {
        QApplication app(argc, argv);
        QString project_Path;
        app.setWindowIcon(QIcon(":/RTIEx.ico"));

        splashScreen splashScreen;
        splashScreen.show();

        current_Exit_Code = app.exec();


    } while (current_Exit_Code == RESTART_EXIT_CODE);

    return current_Exit_Code;

}


