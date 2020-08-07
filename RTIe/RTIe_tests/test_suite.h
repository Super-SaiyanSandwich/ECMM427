#ifndef TEST_SUITE_H
#define TEST_SUITE_H

#include <QObject>
#include <QVector>
#include <QtTest/QtTest>

class Test_Suite : public QObject
{
    Q_OBJECT

public:
    explicit Test_Suite();

    static QVector<QObject*> suites_;

//signals:

};

#endif // TEST_SUITE_H
