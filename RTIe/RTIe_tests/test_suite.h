#ifndef TEST_SUITE_H
#define TEST_SUITE_H

#include <QObject>
#include <QWidget>
#include <QVector>
#include <QtTest/QtTest>

class Test_Suite : public QWidget
{
    Q_OBJECT
public:
    explicit Test_Suite(QWidget *parent = nullptr);
    static QVector<QObject*> suites_;

signals:

};

#endif // TEST_SUITE_H
