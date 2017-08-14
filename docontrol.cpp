#include "docontrol.h"
#include "ui_docontrol.h"
#include <QDebug>
#include "global.h"

DoControl::DoControl(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::DoControl)
{
    ui->setupUi(this);
}

DoControl::~DoControl()
{
    delete ui;
}

void DoControl::initialName(QList<QString> &names)
{
    if (names.length() != DO_LENGTH)
    {
        _LOG << "the length do not equal to" << DI_LENGTH;

        return;
    }

    QList<QLabel *> labels;

    labels << ui->lblTitle
           << ui->lblDo1Name << ui->lblDo2Name << ui->lblDo3Name << ui->lblDo4Name
           << ui->lblDo5Name << ui->lblDo6Name << ui->lblDo7Name << ui->lblDo8Name
           << ui->lblDo9Name << ui->lblDo10Name << ui->lblDo11Name << ui->lblDo12Name
           << ui->lblDo13Name << ui->lblDo14Name << ui->lblDo15Name << ui->lblDo16Name;

    for (int i = 0; i < names.length(); i ++)
    {
        labels.at(i)->setText(names.at(i));
    }
}

void DoControl::updateDo(QList<bool> &state)
{
    if (state.length() != DO_LENGTH - 1)
    {
        _LOG << "the length do not equal to" << DI_LENGTH - 1;

        return;
    }

    QList<QLabel *> labels;

    labels << ui->lblDo1State << ui->lblDo2State << ui->lblDo3State << ui->lblDo4State
           << ui->lblDo5State << ui->lblDo6State << ui->lblDo7State << ui->lblDo8State
           << ui->lblDo9State << ui->lblDo10State << ui->lblDo11State << ui->lblDo12State
           << ui->lblDo13State << ui->lblDo14State << ui->lblDo15State << ui->lblDo16State;

    for (int i = 0; i < state.length(); i ++)
    {
        if (state.at(i))
        {
            labels.at(i)->setStyleSheet(ON_STATE);
        }
        else
        {
            labels.at(i)->setStyleSheet(OFF_STATE);
        }
    }
}
