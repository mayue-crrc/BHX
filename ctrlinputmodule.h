#ifndef CTRLINPUTMODULE_H
#define CTRLINPUTMODULE_H

#include <QWidget>
#include "warnningdialog.h"
#include "QDebug"

namespace Ui {
    class CtrlInputModule;
}

class CtrlInputModule : public QWidget
{
    Q_OBJECT

public:
    explicit CtrlInputModule(QWidget *parent = 0);
    ~CtrlInputModule();
    QString getInputmodulevalue();
    void setInputmode(int mode);
private:
    Ui::CtrlInputModule *ui;
    QString Inputvalue,m_value1,m_value2,m_value3;
    int m_mode;
    WarnningDialog* warnningdialog;

private slots:
    void on_CtrlInputModule_Button_Num0_2_clicked();
    void on_CtrlInputModule_Button_confirm_clicked();
    void on_CtrlInputModule_Button_clear_clicked();
    void on_CtrlInputModule_Button_Num9_clicked();
    void on_CtrlInputModule_Button_Num8_clicked();
    void on_CtrlInputModule_Button_Num7_clicked();
    void on_CtrlInputModule_Button_Num6_clicked();
    void on_CtrlInputModule_Button_Num5_clicked();
    void on_CtrlInputModule_Button_Num4_clicked();
    void on_CtrlInputModule_Button_Num3_clicked();
    void on_CtrlInputModule_Button_Num2_clicked();
    void on_CtrlInputModule_Button_Num1_clicked();
    void on_CtrlInputModule_Button_Num0_clicked();
};

#endif // CTRLINPUTMODULE_H
