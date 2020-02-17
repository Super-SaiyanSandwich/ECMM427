#ifndef TESTWIZARD_H
#define TESTWIZARD_H

#include <QWizard>

namespace Ui {
class TestWizard;
}

class TestWizard : public QWizard
{
    Q_OBJECT

public:
    explicit TestWizard(QWidget *parent = nullptr);
    ~TestWizard();

private:
    Ui::TestWizard *ui;
};

#endif // TESTWIZARD_H
