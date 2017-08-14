#ifndef CTRLALARMBARH_H
#define CTRLALARMBARH_H

#include <QWidget>

namespace Ui {
    class CtrlAlarmBarH;
}

class CtrlAlarmBarH : public QWidget
{
    Q_OBJECT

public:
    explicit CtrlAlarmBarH(QWidget *parent = 0);
    ~CtrlAlarmBarH();
    void setLabelStr(QString str);
private:
    Ui::CtrlAlarmBarH *ui;

private slots:
    void on_confirmbtn_pressed();
};

#endif // CTRLALARMBARH_H
