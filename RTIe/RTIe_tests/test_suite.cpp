#include "test_suite.h"

QVector<QObject*> Test_Suite::suites_;

Test_Suite::Test_Suite()
{
    suites_.append(this);
}
