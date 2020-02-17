#include "image_Gatherer.h"

#include <QImage>

image_Gatherer::image_Gatherer(QObject *parent) : QObject(parent)
{

}

image_Gatherer::~image_Gatherer()
{
    //delete d;
}

struct gathererPrivate
{
    QString inputFilename;
    QImage image;
};

void image_Gatherer::setInput(const QString &filename)
{
    d->inputFilename = filename;
}

void image_Gatherer::start()
{
    if (d->inputFilename.isEmpty())
    {
        emit error();
        return;
    }

    emit finished(d->image);
}
