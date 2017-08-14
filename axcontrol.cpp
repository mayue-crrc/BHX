#include "axcontrol.h"
#include "ui_axcontrol.h"
#include "global.h"
#include <QDebug>

AxControl::AxControl(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AxControl)
{
    ui->setupUi(this);
}

AxControl::~AxControl()
{
    delete ui;
}

void AxControl::initialName(QList<QString> &names)
{
    if (names.length() != AX_LENGTH)
    {
        _LOG << "the length ax not equal to" << DI_LENGTH;

        return;
    }

    QList<QLabel *> labels;

    labels << ui->lblTitle
           << ui->lblAin1Name << ui->lblAin2Name << ui->lblAin3Name << ui->lblAin4Name
           << ui->lblAin5Name << ui->lblAin6Name << ui->lblAin7Name << ui->lblAin8Name;

    for (int i = 0; i < names.length(); i ++)
    {
        labels.at(i)->setText(names.at(i));
    }
}

void AxControl::updateAx(QList<QString> &state)
{
    if (state.length() != (AX_LENGTH - 1) * 2)
    {
        _LOG << "the length ax not equal to" << (DI_LENGTH - 1) * 2;

        return;
    }

    QList<QLabel *> labels;

    labels << ui->lblAin1Current << ui->lblAin1State
           << ui->lblAin2Current << ui->lblAin2State
           << ui->lblAin3Current << ui->lblAin3State
           << ui->lblAin4Current << ui->lblAin4State
           << ui->lblAin5Voltage << ui->lblAin5State
           << ui->lblAin6Voltage << ui->lblAin6State
           << ui->lblAin7Voltage << ui->lblAin7State
           << ui->lblAin8Voltage << ui->lblAin8State;

    for (int i = 0; i < state.length(); i ++)
    {
        labels.at(i)->setText(state.at(i));
    }
}
