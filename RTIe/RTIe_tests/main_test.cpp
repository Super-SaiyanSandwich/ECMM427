#include <QCoreApplication>

#include "test_suite.h"

int main(int argc, char *argv[])
{

    QCoreApplication a(argc, argv);

    int failedSuitesCount = 0;

    QVector<QObject*>::iterator iter;

    for ( iter = Test_Suite::suites_.begin(); iter != Test_Suite::suites_.end(); ++iter )
    {
        int result = QTest::qExec( *iter );

        if ( result != 0 )
        {
            failedSuitesCount++;
        }
    }

    return failedSuitesCount;
}

//    QTEST_MAIN(RTIe_tests)
