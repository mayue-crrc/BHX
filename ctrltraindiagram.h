#ifndef CTRLTRAINDIAGRAM_H
#define CTRLTRAINDIAGRAM_H

#include <QWidget>
#include "qpainter.h"
#include "qlabel.h"
#include "qtimer.h"

namespace Ui {
    class CtrlTrainDiagram;
}

class CtrlTrainDiagram : public QWidget
{
    Q_OBJECT

public:
    explicit CtrlTrainDiagram(QWidget *parent = 0);
    void SetMC1DoorStates(int states[4]);
    void SetM1DoorStates(int states[4]);
    void SetM2DoorStates(int states[4]);
    void SetMC2DoorStates(int states[4]);
    void SetMC1BrakeStates(int state);
    void SetMC2BrakeStates(int state);
    void SetT1BrakeStates(int state);
    void SetT2BrakeStates(int state);
    void SetM1BrakeStates(int state);
    void SetM2BrakeStates(int state);

    void SetPantState(int TP1state,int TP2state);
    void SetKeyState(bool MC1active,bool MC2active);

    void SetBrakeMRLS(bool MC1Flg,bool M1Flg,bool M2Flg,bool MC2Flg);

    ~CtrlTrainDiagram();

private:
    Ui::CtrlTrainDiagram *ui;
    int m_MC1DoorStates[8];
    //int m_M1DoorStates[4];
    //int m_M2DoorStates[4];
    int m_MC2DoorStates[8];
    int m_PantState_TP1;
    int m_PantState_TP2;
    int m_BrakeState_MC1;
    int m_BrakeState_MC2;
    int m_BrakeState_M1;
    int m_BrakeState_M2;
    int m_BrakeState_TC1;
    int m_BrakeState_TC2;

    bool m_MC1Active,m_MC2Active;
    bool m_MC1BrakeMBLS,m_M1BrakeMBLS,m_M2BrakeMBLS,m_MC2BrakeMBLS;
    void SetDoorLabelstates(QLabel* label,int states);
    int timer333ms;
protected:
    void paintEvent(QPaintEvent *);
    void timerEvent(QTimerEvent *);

};

#endif // CTRLTRAINDIAGRAM_H
