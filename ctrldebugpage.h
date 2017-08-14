#ifndef CTRLDEBUGPAGE_H
#define CTRLDEBUGPAGE_H

#include "basepage.h"
#include "crrccan.h"
#include "QTimer"
#include "QKeyEvent"

namespace Ui {
    class CtrlDebugPage;
}

class CtrlDebugPage : public BasePage
{
    Q_OBJECT

public:
    explicit CtrlDebugPage(QWidget *parent = 0);
    ~CtrlDebugPage();
    void getCrrcCanObj(CrrcCan* ptr);
    void starttimer();
private:
    Ui::CtrlDebugPage *ui;
    CrrcCan* CanDate;
    QString portstr,bytestr,bitstr,bitvaluestr;
    int selection,inputtype;
    QTimer* updatetimer;
    void keyPressEvent(QKeyEvent *event);

private slots:
    void on_pushButtonreset_pressed();
    void on_radioButton_4_pressed();
    void on_radioButton_3_clicked();
    void on_radioButton_clicked();
    void on_radioButton_2_clicked();
    void on_pushButtonclear_pressed();
    void on_pushButtonset_pressed();
    void updatedata();
};

#endif // CTRLDEBUGPAGE_H
