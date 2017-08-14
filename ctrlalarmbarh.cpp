#include "ctrlalarmbarh.h"
#include "ui_ctrlalarmbarh.h"

CtrlAlarmBarH::CtrlAlarmBarH(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CtrlAlarmBarH)
{
    ui->setupUi(this);
}

CtrlAlarmBarH::~CtrlAlarmBarH()
{
    delete ui;
}
void CtrlAlarmBarH::setLabelStr(QString str)
{
    ui->Showlbl->setText(str);
}

void CtrlAlarmBarH::on_confirmbtn_pressed()
{
    this->close();
}
