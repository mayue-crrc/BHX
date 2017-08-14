#include "ctrlfaultdetails.h"
#include "ui_ctrlfaultdetails.h"
#include "qdebug.h"
CtrlFaultdetails::CtrlFaultdetails(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CtrlFaultdetails)
{
    ui->setupUi(this);
}

CtrlFaultdetails::~CtrlFaultdetails()
{
    delete ui;
}
void CtrlFaultdetails::SetFaultFname(QString FName)
{
    ui->CtrlFaultdetails_label_FName->setText(FName);

}
void CtrlFaultdetails::SetFaultFcode(QString FCode)
{
    ui->CtrlFaultdetails_label_FCode->setText(FCode);
}
void CtrlFaultdetails::SetFaultFdevice(QString Fdevice)
{
    ui->CtrlFaultdetails_label_FDevice->setText(Fdevice);
}
void CtrlFaultdetails::SetFaultFposition(QString Fposition)
{
    ui->CtrlFaultdetails_label_FPos->setText(Fposition);
}
void CtrlFaultdetails::SetFaultFdetail(QString Fdetail)
{
    QStringList stringList = Fdetail.split("|");
    QString t_detail = "";
    if(stringList.size() > 1)
    {
        for(int i = 0; i < stringList.size();i++)
        {
            t_detail = t_detail + stringList.at(i)+"\n";
        }

        ui->CtrlFaultdetails_label_FDetail->setText(t_detail);//Fdetail);
    }else
    {
        ui->CtrlFaultdetails_label_FDetail->setText(Fdetail);

    }

}

void CtrlFaultdetails::on_CtrlFaultdetails_Button_quit_pressed()
{
    this->close();
}

