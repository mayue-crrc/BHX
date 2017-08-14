#include "ctrlvisionlifesignalform.h"
#include "ui_ctrlvisionlifesignalform.h"

CtrlVisionLifesignalForm::CtrlVisionLifesignalForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CtrlVisionLifesignalForm)
{
    ui->setupUi(this);
}

CtrlVisionLifesignalForm::~CtrlVisionLifesignalForm()
{
    delete ui;
}
void CtrlVisionLifesignalForm::initialName(QList<QString> &names)
{


    QList<QLabel *> labels;

    labels << ui->name1 << ui->name2 << ui->name3 << ui->name4
           << ui->name5 << ui->name6 << ui->name7 << ui->name8
           << ui->name9 << ui->name10 << ui->name11 << ui->name12
           << ui->name1_2 << ui->name2_2 << ui->name3_2 << ui->name4_2
           << ui->name5_2 << ui->name6_2 << ui->name7_2 << ui->name8_2
           << ui->name9_2 << ui->name10_2 << ui->name11_2 << ui->name12_2
           << ui->name1_3 << ui->name2_3 << ui->name3_3 << ui->name4_3
           << ui->name5_3 << ui->name6_3 << ui->name7_3 << ui->name8_3
           << ui->name9_3 << ui->name10_3 << ui->name11_3 << ui->name12_3;

    if(names.length() < labels.length())
    {
        for(int i = names.length() ; i < labels.length(); i++)
        {
            names << "";
        }
    }

    for (int i = 0; i < names.length(); i ++)
    {
        labels.at(i)->setText(names.at(i));
    }
}





void CtrlVisionLifesignalForm::updateVision(QList<QString> &vision)
{

    QList<QLabel *> labels;

    labels << ui->vision1 << ui->vision2 << ui->vision3 << ui->vision4
           << ui->vision5 << ui->vision6 << ui->vision7 << ui->vision8
           << ui->vision9 << ui->vision10 << ui->vision11 << ui->vision12
           << ui->vision1_2 << ui->vision2_2 << ui->vision3_2 << ui->vision4_2
           << ui->vision5_2 << ui->vision6_2 << ui->vision7_2 << ui->vision8_2
           << ui->vision9_2 << ui->vision10_2 << ui->vision11_2 << ui->vision12_2
           << ui->vision1_3 << ui->vision2_3 << ui->vision3_3 << ui->vision4_3
           << ui->vision5_3 << ui->vision6_3 << ui->vision7_3 << ui->vision8_3
           << ui->vision9_3 << ui->vision10_3 << ui->vision11_3 << ui->vision12_3
           ;

    if(vision.length() < labels.length())
    {
        for(int i = vision.length() ; i < labels.length(); i++)
        {
            vision << "";
        }
    }

    for (int i = 0; i < vision.length(); i ++)
    {
        labels.at(i)->setText(vision.at(i));
    }

}
void CtrlVisionLifesignalForm::updateLifesignal(QList<QString> &lifesignal)
{


    QList<QLabel *> labels;


    labels << ui->lifesignal1 << ui->lifesignal2 << ui->lifesignal3 << ui->lifesignal4
           << ui->lifesignal5 << ui->lifesignal6 << ui->lifesignal7 << ui->lifesignal8
           << ui->lifesignal9 << ui->lifesignal10 << ui->lifesignal11 << ui->lifesignal12
           << ui->lifesignal1_2 << ui->lifesignal2_2 << ui->lifesignal3_2 << ui->lifesignal4_2
           << ui->lifesignal5_2 << ui->lifesignal6_2 << ui->lifesignal7_2 << ui->lifesignal8_2
           << ui->lifesignal9_2 << ui->lifesignal10_2 << ui->lifesignal11_2 << ui->lifesignal12_2
           << ui->lifesignal1_3 << ui->lifesignal2_3 << ui->lifesignal3_3 << ui->lifesignal4_3
           << ui->lifesignal5_3 << ui->lifesignal6_3 << ui->lifesignal7_3 << ui->lifesignal8_3
           << ui->lifesignal9_3 << ui->lifesignal10_3 << ui->lifesignal11_3 << ui->lifesignal12_3
;
    if(lifesignal.length() < labels.length())
    {
        for(int i = lifesignal.length() ; i < labels.length(); i++)
        {
            lifesignal << "";
        }
    }

    for (int i = 0; i < lifesignal.length(); i ++)
    {
        labels.at(i)->setText(lifesignal.at(i));
    }
}
