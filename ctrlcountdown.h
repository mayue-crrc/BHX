#ifndef CTRLCOUNTDOWN_H
#define CTRLCOUNTDOWN_H

#include <QWidget>
#include "QTimer"
namespace Ui {
    class CtrlCountdown;
}

class CtrlCountdown : public QWidget
{
    Q_OBJECT

public:
    explicit CtrlCountdown(QWidget *parent = 0);
    ~CtrlCountdown();
    void CountdownInput(unsigned char value);
private:
    Ui::CtrlCountdown *ui;
    QTimer* timer;
private slots:
    void Blinking1s();

};

#endif // CTRLCOUNTDOWN_H
