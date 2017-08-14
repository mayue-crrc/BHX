#include "ctrlcountdown.h"
#include "ui_ctrlcountdown.h"
#include "QDebug"
#define CIRCLEGREEN "border-radius:40px;border:9px solid white;font: 75 bold 40px;background-color: rgb(210, 210, 210);color:rgb(0, 170, 0);"
#define CIRCLERED "border-radius:40px;border:9px solid white;font: 75 bold 40px;background-color: rgb(210, 210, 210);color:rgb(255, 0, 0);"
#define CIRCLEYELLOW "border-radius:40px;border:9px solid white;font: 75 bold 40px;background-color: rgb(210, 210, 210);color:rgb(255, 255, 0);"

CtrlCountdown::CtrlCountdown(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CtrlCountdown)
{
    ui->setupUi(this);
    timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(Blinking1s()));

}

CtrlCountdown::~CtrlCountdown()
{
    delete ui;
}
void CtrlCountdown::CountdownInput(unsigned char value)
{
    if(value < 10)
    {
        if(timer->isActive())
        {

        }else
        {
            timer->start(500);
        }
    }else
    {
        timer->stop();
        ui->CtrlCountdown_cirlce->setStyleSheet(CIRCLEGREEN);

    }
    ui->CtrlCountdown_cirlce->setText(QString::number(value));
}
void CtrlCountdown::Blinking1s()
{
    static bool flg = false;
    if(flg)
    {
        ui->CtrlCountdown_cirlce->setStyleSheet(CIRCLERED);
        flg = false;
    }else
    {
        ui->CtrlCountdown_cirlce->setStyleSheet(CIRCLEYELLOW);
        flg = true;

    }
}
