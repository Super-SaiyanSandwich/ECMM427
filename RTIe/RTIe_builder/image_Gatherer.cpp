#include "image_Gatherer.h"

#include <QImage>
#include <QDebug>
#include "splash_Screen.h"

image_Gatherer::image_Gatherer(QObject *parent) : QObject(parent)
{
    gathererPrivate gp = {
        "",
        QImage(":/marble_Test_Image.jpg"),
    };

    this->d = gp;
}

image_Gatherer::~image_Gatherer()
{
    //delete d;
}


void image_Gatherer::setInput(const QString &filename)
{
    d.inputFilename = filename;
}

void image_Gatherer::start()
{
    if (d.inputFilename.isEmpty())
    {
        emit error();
        return;
    }

    d.image = QImage(splashScreen::project_Path + "/images/wd/" + d.inputFilename);

    emit finished(d.image, d.inputFilename);
}
