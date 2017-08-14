#ifndef CTRLLEVELBAR_H
#define CTRLLEVELBAR_H

#include <QWidget>

namespace Ui {
    class CtrlLevelBar;
}

class CtrlLevelBar : public QWidget
{
    Q_OBJECT

public:
    explicit CtrlLevelBar(QWidget *parent = 0);
    ~CtrlLevelBar();
    void Ctrl_SetLevelvalue(int i);

private:
    Ui::CtrlLevelBar *ui;
    void ResetLevelState();
};

#endif // CTRLLEVELBAR_H
