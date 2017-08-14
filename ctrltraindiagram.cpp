#include "ctrltraindiagram.h"
#include "ui_ctrltraindiagram.h"
#include "qdebug.h"
#define DOOROPEN  "border: 1px groove black;background-color: blue;"
#define DOORCLOSE  "border: 1px groove black;background-color: green;"
#define DOOREMUMLOCK  "border: 1px groove black;background-color: yellow;"
#define DOORBYPASS  "background-color: rgb(80, 80, 80);border-image: url(:/new/prefix1/images/dooriso.bmp);"
#define DOORNOSTATE  "background-color: rgb(160,32,240);"
#define DOOROFFLINE  "border: 1px groove black;background-color: white;"
#define DOORFAULT  "border: 1px groove black;background-color: red;"
#define DOORACTING  "border: 1px groove black;background-color: orange;"
#define DOOROBS  "border: 1px groove black;background-color: brown;"

#define BRAKEFAULT  "background-color: rgb(255,0,0);border:2px;border-radius:10px;padding:2px 4px;"
#define BRAKEHB  "background-color: rgb(75,0,0);border:2px;border-radius:10px;padding:2px 4px;"
#define BRAKEAP  "background-color: rgb(255,0,0);border:2px;border-radius:10px;padding:2px 4px;"
#define BRAKERE  "background-color: rgb(0,255,0);border:2px;border-radius:10px;padding:2px 4px;"
#define BRAKEOFF  "background-color: white;border:2px;border-radius:10px;padding:2px 4px;"
#define BRAKENOSTATE  "background-color: rgb(160,32,240);border:2px;border-radius:10px;padding:2px 4px;"

CtrlTrainDiagram::CtrlTrainDiagram(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CtrlTrainDiagram)
{
    ui->setupUi(this);

    timer333ms = startTimer(333);
    m_MC1Active = false;
    m_MC2Active = false;
    m_BrakeState_MC1 = 0;
    m_BrakeState_MC2 = 0;
}

CtrlTrainDiagram::~CtrlTrainDiagram()
{
    delete ui;
}
void CtrlTrainDiagram::timerEvent(QTimerEvent *e)
{
    if(e->timerId() == timer333ms)
    {
        //mc1 door8
        SetDoorLabelstates(ui->TrainCtrl_label_MC1Door1,m_MC1DoorStates[0]);
        SetDoorLabelstates(ui->TrainCtrl_label_MC1Door2,m_MC1DoorStates[1]);
        SetDoorLabelstates(ui->TrainCtrl_label_MC1Door3,m_MC1DoorStates[2]);
        SetDoorLabelstates(ui->TrainCtrl_label_MC1Door4,m_MC1DoorStates[3]);
        SetDoorLabelstates(ui->TrainCtrl_label_MC1Door5,m_MC1DoorStates[4]);
        SetDoorLabelstates(ui->TrainCtrl_label_MC1Door6,m_MC1DoorStates[5]);
        SetDoorLabelstates(ui->TrainCtrl_label_MC1Door7,m_MC1DoorStates[6]);
        SetDoorLabelstates(ui->TrainCtrl_label_MC1Door8,m_MC1DoorStates[7]);

        SetDoorLabelstates(ui->TrainCtrl_label_MC2Door1,m_MC2DoorStates[0]);
        SetDoorLabelstates(ui->TrainCtrl_label_MC2Door2,m_MC2DoorStates[1]);
        SetDoorLabelstates(ui->TrainCtrl_label_MC2Door3,m_MC2DoorStates[2]);
        SetDoorLabelstates(ui->TrainCtrl_label_MC2Door4,m_MC2DoorStates[3]);
        SetDoorLabelstates(ui->TrainCtrl_label_MC2Door5,m_MC2DoorStates[4]);
        SetDoorLabelstates(ui->TrainCtrl_label_MC2Door6,m_MC2DoorStates[5]);
        SetDoorLabelstates(ui->TrainCtrl_label_MC2Door7,m_MC2DoorStates[6]);
        SetDoorLabelstates(ui->TrainCtrl_label_MC2Door8,m_MC2DoorStates[7]);

        //  brake state
        if(m_BrakeState_MC1 == 3)
        {
            this->ui->TrainCtrl_label_MC1Brake->setStyleSheet(BRAKEAP);

        }else if(m_BrakeState_MC1 == 2)
        {
            this->ui->TrainCtrl_label_MC1Brake->setStyleSheet(BRAKERE);
        }else
        {
            this->ui->TrainCtrl_label_MC1Brake->setStyleSheet(BRAKENOSTATE);
        }

        if(m_BrakeState_MC2 == 3)
        {
            this->ui->TrainCtrl_label_MC2Brake->setStyleSheet(BRAKEAP);

        }else if(m_BrakeState_MC2 == 2)
        {
            this->ui->TrainCtrl_label_MC2Brake->setStyleSheet(BRAKERE);
        }else
        {
            this->ui->TrainCtrl_label_MC2Brake->setStyleSheet(BRAKENOSTATE);
        }

        if(m_BrakeState_TC1 == 3)
        {
            this->ui->TrainCtrl_label_TC1Brake->setStyleSheet(BRAKEAP);

        }else if(m_BrakeState_TC1 == 2)
        {
            this->ui->TrainCtrl_label_TC1Brake->setStyleSheet(BRAKERE);

        }else
        {
            this->ui->TrainCtrl_label_TC1Brake->setStyleSheet(BRAKENOSTATE);
        }

        if(m_BrakeState_TC2 == 3)
        {
            this->ui->TrainCtrl_label_TC2Brake->setStyleSheet(BRAKEAP);

        }else if(m_BrakeState_TC2 == 2)
        {
            this->ui->TrainCtrl_label_TC2Brake->setStyleSheet(BRAKERE);
        }else
        {
            this->ui->TrainCtrl_label_TC2Brake->setStyleSheet(BRAKENOSTATE);
        }

        if(m_BrakeState_M1 == 3)
        {
            this->ui->TrainCtrl_label_M1Brake->setStyleSheet(BRAKEAP);

        }else if(m_BrakeState_M1 == 2)
        {
            this->ui->TrainCtrl_label_M1Brake->setStyleSheet(BRAKERE);
        }else
        {
            this->ui->TrainCtrl_label_M1Brake->setStyleSheet(BRAKENOSTATE);
        }

        if(m_BrakeState_M2 == 3)
        {
            this->ui->TrainCtrl_label_M2Brake->setStyleSheet(BRAKEAP);

        }else if(m_BrakeState_M2 == 2)
        {
            this->ui->TrainCtrl_label_M2Brake->setStyleSheet(BRAKERE);
        }else
        {
            this->ui->TrainCtrl_label_M2Brake->setStyleSheet(BRAKENOSTATE);
        }
    }
}

void CtrlTrainDiagram::paintEvent(QPaintEvent *)
{
    QPainter *painter = new QPainter();

    painter->begin(this);

    QPen pen ;
    pen.setWidth(2);
    pen.setColor(Qt::red);
    painter->setPen(pen);

    if(m_PantState_TP1 == 1)    // left pant up
    {
        painter->drawLine(QPoint(130,10),QPoint(160,35));
        painter->drawLine(QPoint(160,35),QPoint(130,60));

    }else if(m_PantState_TP1 == 2) // left panto down
    {
        painter->drawLine(QPoint(110,50),QPoint(160,50));
        painter->drawLine(QPoint(110,50),QPoint(105,55));
        painter->drawLine(QPoint(165,55),QPoint(160,50));

        painter->drawLine(QPoint(130,50),QPoint(160,54));
        painter->drawLine(QPoint(160,54),QPoint(130,58));
    }else
    {
        painter->drawLine(QPoint(110,30),QPoint(160,30));
        painter->drawLine(QPoint(110,30),QPoint(105,35));
        painter->drawLine(QPoint(165,35),QPoint(160,30));

        painter->drawLine(QPoint(130,30),QPoint(160,45));
        painter->drawLine(QPoint(160,45),QPoint(130,60));
    }

    if(m_PantState_TP2 == 1)    // right pant up
    {
        painter->drawLine(QPoint(330,10),QPoint(300,35));
        painter->drawLine(QPoint(300,35),QPoint(330,60));
    }else if(m_PantState_TP2 == 2) // right panto down
    {
        painter->drawLine(QPoint(300,50),QPoint(350,50));
        painter->drawLine(QPoint(300,50),QPoint(295,55));
        painter->drawLine(QPoint(355,55),QPoint(350,50));

        painter->drawLine(QPoint(330,50),QPoint(300,54));
        painter->drawLine(QPoint(300,54),QPoint(330,58));
    }else
    {
        painter->drawLine(QPoint(300,30),QPoint(350,30));
        painter->drawLine(QPoint(300,30),QPoint(295,35));
        painter->drawLine(QPoint(355,35),QPoint(350,30));

        painter->drawLine(QPoint(330,30),QPoint(300,45));
        painter->drawLine(QPoint(300,45),QPoint(330,60));
    }


    if(m_MC1Active && m_MC2Active) // KEY ACTIVE
    {
        this->ui->TrainCtrl_label_MC1active->hide();
        this->ui->TrainCtrl_label_MC2active->hide();
    }else if(m_MC1Active)
    {
        this->ui->TrainCtrl_label_MC1active->show();
        this->ui->TrainCtrl_label_MC2active->hide();
    }else if(m_MC2Active)
    {
        this->ui->TrainCtrl_label_MC2active->show();
        this->ui->TrainCtrl_label_MC1active->hide();
    }else
    {
        this->ui->TrainCtrl_label_MC1active->hide();
        this->ui->TrainCtrl_label_MC2active->hide();
    }

    // mannal release
    if(this->m_MC1BrakeMBLS)
    {
        this->ui->TrainCtrl_label_MC1MRLS->show();
    }else
    {
        this->ui->TrainCtrl_label_MC1MRLS->hide();
    }
    if(this->m_M1BrakeMBLS)
    {
        this->ui->TrainCtrl_label_M1MRLS->show();
    }else
    {
        this->ui->TrainCtrl_label_M1MRLS->hide();
    }
    if(this->m_M2BrakeMBLS)
    {
        this->ui->TrainCtrl_label_M2MRLS->show();
    }else
    {
        this->ui->TrainCtrl_label_M2MRLS->hide();
    }
    if(this->m_MC2BrakeMBLS)
    {
        this->ui->TrainCtrl_label_MC2MRLS->show();
    }else
    {
        this->ui->TrainCtrl_label_MC2MRLS->hide();
    }

    painter->end();

}
void CtrlTrainDiagram::SetMC1DoorStates(int states[8])
{
    for(int i =0; i < 8 ; i++)
    {
        m_MC1DoorStates[i] = states[i];
    }
}

void CtrlTrainDiagram::SetMC2DoorStates(int states[8])
{
    for(int i =0; i < 8 ; i++)
    {
        m_MC2DoorStates[i] = states[i];
    }
}
void CtrlTrainDiagram::SetPantState(int TP1state,int TP2state)
{
    m_PantState_TP1 = TP1state;
    m_PantState_TP2 = TP2state;

}
void CtrlTrainDiagram::SetKeyState(bool MC1active,bool MC2active)
{
    m_MC1Active = MC1active;
    m_MC2Active = MC2active;

}

void CtrlTrainDiagram::SetBrakeMRLS(bool MC1Flg, bool M1Flg, bool M2Flg, bool MC2Flg)
{
    m_MC1BrakeMBLS = MC1Flg;
    m_M1BrakeMBLS = M1Flg;
    m_M2BrakeMBLS = M2Flg;
    m_MC2BrakeMBLS = MC2Flg;

}
void CtrlTrainDiagram::SetMC1BrakeStates(int state)
{
    m_BrakeState_MC1 = state;
}
void CtrlTrainDiagram::SetMC2BrakeStates(int state)
{
    m_BrakeState_MC2 = state;
}
void CtrlTrainDiagram::SetT1BrakeStates(int state)
{
    m_BrakeState_TC1 = state;
}
void CtrlTrainDiagram::SetT2BrakeStates(int state)
{
    m_BrakeState_TC2 = state;
}
void CtrlTrainDiagram::SetM1BrakeStates(int state)
{
    m_BrakeState_M1 = state;
}
void CtrlTrainDiagram::SetM2BrakeStates(int state)
{
    m_BrakeState_M2 = state;
}

void CtrlTrainDiagram::SetDoorLabelstates(QLabel* label,int states)
{
    /*
    1: OPEN
    2: CLOSE
    3: EMUNLOCK
    4: BYPASS
    5: acting
    6: orb
    0: OFFLINE
    */
    switch(states)
    {
    case 1:
        label->setStyleSheet(DOOROPEN);
        break;
    case 2:
        label->setStyleSheet(DOORCLOSE);
        break;
    case 3:
        label->setStyleSheet(DOOREMUMLOCK);
        break;
    case 4:
        label->setStyleSheet(DOORBYPASS);
        break;
    case 5:
        label->setStyleSheet(DOORACTING);
        break;
    case 6:
        label->setStyleSheet(DOOROBS);
        break;
    case 0:
        label->setStyleSheet(DOOROFFLINE);
        break;
    default:
        label->setStyleSheet(DOORNOSTATE);
        break;
    }
}
