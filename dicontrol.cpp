#include "dicontrol.h"
#include "ui_dicontrol.h"
#include "global.h"
#include <QDebug>

DiControl::DiControl(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::DiControl)
{
    ui->setupUi(this);
}

DiControl::~DiControl()
{
    delete ui;
}

void DiControl::initialName(QList<QString> &names)
{
    if (names.length() != DI_LENGTH)
    {
        _LOG << "the length do not equal to" << DI_LENGTH;

        return;
    }

    QList<QLabel *> labels;

    labels << ui->lblTitle
           << ui->lblIn1Name << ui->lblIn2Name << ui->lblIn3Name << ui->lblIn4Name
           << ui->lblIn5Name << ui->lblIn6Name << ui->lblIn7Name << ui->lblIn8Name
           << ui->lblIn9Name << ui->lblIn10Name << ui->lblIn11Name << ui->lblIn12Name
           << ui->lblIn13Name << ui->lblIn14Name << ui->lblIn15Name << ui->lblIn16Name
           << ui->lblIn17Name << ui->lblIn18Name << ui->lblIn19Name << ui->lblIn20Name
           << ui->lblIn21Name << ui->lblIn22Name << ui->lblIn23Name << ui->lblIn24Name;

    for (int i = 0; i < names.length(); i ++)
    {
        labels.at(i)->setText(names.at(i));
    }
}

void DiControl::updateDi(QList<bool> &state)
{
    if (state.length() != DI_LENGTH - 1)
    {
        _LOG << "the length do not equal to" << DI_LENGTH - 1;

        return;
    }

    QList<QLabel *> labels;

    labels << ui->lblIn1State << ui->lblIn2State << ui->lblIn3State << ui->lblIn4State
           << ui->lblIn5State << ui->lblIn6State << ui->lblIn7State << ui->lblIn8State
           << ui->lblIn9State << ui->lblIn10State << ui->lblIn11State << ui->lblIn12State
           << ui->lblIn13State << ui->lblIn14State << ui->lblIn15State << ui->lblIn16State
           << ui->lblIn17State << ui->lblIn18State << ui->lblIn19State << ui->lblIn20State
           << ui->lblIn21State << ui->lblIn22State << ui->lblIn23State << ui->lblIn24State;

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
