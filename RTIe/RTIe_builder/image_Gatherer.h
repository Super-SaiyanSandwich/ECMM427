#ifndef IMAGE_GATHERER_H
#define IMAGE_GATHERER_H

#include <QObject>

class image_Gatherer : public QObject
{
    Q_OBJECT
public:
    image_Gatherer(QObject *parent = 0);
    ~image_Gatherer();

public slots:
    void setInput(const QString &filename);
    void start();

signals:
    void error();
    void finished(const QImage &output);

private:
    struct gathererPrivate *d;

};

#endif // IMAGE_GATHERER_H
