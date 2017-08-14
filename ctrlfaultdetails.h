#ifndef CTRLFAULTDETAILS_H
#define CTRLFAULTDETAILS_H

#include <QWidget>

namespace Ui {
    class CtrlFaultdetails;
}

class CtrlFaultdetails : public QWidget
{
    Q_OBJECT

public:
    explicit CtrlFaultdetails(QWidget *parent = 0);
    ~CtrlFaultdetails();
    void SetFaultFname(QString FName);
    void SetFaultFcode(QString FCode);
    void SetFaultFdevice(QString Fdevice);
    void SetFaultFposition(QString Fposition);
    void SetFaultFdetail(QString Fdetail);
private:
    Ui::CtrlFaultdetails *ui;


private slots:
    void on_CtrlFaultdetails_Button_quit_pressed();
};

#endif // CTRLFAULTDETAILS_H
