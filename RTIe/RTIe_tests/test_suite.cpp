#include "test_suite.h"

QVector<QObject*> Test_Suite::suites_;

Test_Suite::Test_Suite(QWidget *parent) : QWidget(parent)
{
    suites_.append(this);
}
