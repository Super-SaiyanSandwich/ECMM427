#include <QtTest>
#include <QCoreApplication>

// add necessary includes here

class RTIe_tests : public QObject
{
    Q_OBJECT

public:
    RTIe_tests();
    ~RTIe_tests();

private slots:
    void test_case1();

};

RTIe_tests::RTIe_tests()
{

}

RTIe_tests::~RTIe_tests()
{

}

void RTIe_tests::test_case1()
{

}

QTEST_MAIN(RTIe_tests)
#include "tst_rtie_tests.moc"
