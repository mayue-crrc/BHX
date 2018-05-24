#include "vehiclewheelsetpage.h"
#include "ui_vehiclewheelsetpage.h"

VehicleWheelSetPage::VehicleWheelSetPage(QWidget *parent) :
    BasePage(parent),
    ui(new Ui::VehicleWheelSetPage)
{
    ui->setupUi(this);

    QList<QPushButton*> buttons;
    buttons<<ui->VehicleWheelset_tp11wheelbtn<<ui->VehicleWheelset_tp12wheelbtn
            <<ui->VehicleWheelset_tp13wheelbtn<<ui->VehicleWheelset_tp14wheelbtn
            <<ui->VehicleWheelset_tp21wheelbtn<<ui->VehicleWheelset_tp22wheelbtn
            <<ui->VehicleWheelset_tp23wheelbtn<<ui->VehicleWheelset_tp24wheelbtn
            <<ui->VehicleWheelset_traincodebtn<<ui->VehicleWheelset_accmilebtn;
    foreach(QPushButton* btns,buttons)
    {
        connect(btns,SIGNAL(clicked()),this,SLOT(InputSelectEvent()));
    }
    timer3scount[0] = timer3scount[1] = timer3scount[2] = 0;
    inputmodule = new CtrlInputModule(this);
    inputmodule->setGeometry(150,50,inputmodule->width(),inputmodule->height());
    inputmodule->hide();

    ui->VehicleWheelset_tp11wheellbl->setText(QString::number(this->database->DefaultWheel1_TP1Value+580));
    ui->VehicleWheelset_tp12wheellbl->setText(QString::number(this->database->DefaultWheel2_TP1Value+580));
    ui->VehicleWheelset_tp13wheellbl->setText(QString::number(this->database->DefaultWheel3_TP1Value+580));
    ui->VehicleWheelset_tp14wheellbl->setText(QString::number(this->database->DefaultWheel4_TP1Value+580));
    ui->VehicleWheelset_tp21wheellbl->setText(QString::number(this->database->DefaultWheel1_TP2Value+580));
    ui->VehicleWheelset_tp22wheellbl->setText(QString::number(this->database->DefaultWheel2_TP2Value+580));
    ui->VehicleWheelset_tp23wheellbl->setText(QString::number(this->database->DefaultWheel3_TP2Value+580));
    ui->VehicleWheelset_tp24wheellbl->setText(QString::number(this->database->DefaultWheel4_TP2Value+580));

    ui->VehicleWheelset_traincodelbl->setText(QString::number(this->database->DefaultTrainCode));

}

VehicleWheelSetPage::~VehicleWheelSetPage()
{
    delete ui;
}
void VehicleWheelSetPage::updatePage()
{
    if(m_inputtype == "TP11")
    {
        if(inputmodule->getInputmodulevalue().toInt() >= 580)
        this->database->HMiCT_Wheel1_TP1_U8 = inputmodule->getInputmodulevalue().toInt() - 580;
        ui->VehicleWheelset_tp11wheellbl->setText(QString::number(inputmodule->getInputmodulevalue().toInt()));
    }else if(m_inputtype == "TP12")
    {
        if(inputmodule->getInputmodulevalue().toInt() >= 580)
        this->database->HMiCT_Wheel2_TP1_U8 = inputmodule->getInputmodulevalue().toInt() - 580;
        ui->VehicleWheelset_tp12wheellbl->setText(QString::number(inputmodule->getInputmodulevalue().toInt()));
    }else if(m_inputtype == "TP13")
    {
        if(inputmodule->getInputmodulevalue().toInt() >= 580)
        this->database->HMiCT_Wheel3_TP1_U8 = inputmodule->getInputmodulevalue().toInt() - 580;
        ui->VehicleWheelset_tp13wheellbl->setText(QString::number(inputmodule->getInputmodulevalue().toInt()));
    }else if(m_inputtype == "TP14")
    {
        if(inputmodule->getInputmodulevalue().toInt() >= 580)
        this->database->HMiCT_Wheel4_TP1_U8 = inputmodule->getInputmodulevalue().toInt() - 580;
        ui->VehicleWheelset_tp14wheellbl->setText(QString::number(inputmodule->getInputmodulevalue().toInt()));
    }else if(m_inputtype == "TP21")
    {
        if(inputmodule->getInputmodulevalue().toInt() >= 580)
        this->database->HMiCT_Wheel1_TP2_U8 = inputmodule->getInputmodulevalue().toInt() - 580;
        ui->VehicleWheelset_tp21wheellbl->setText(QString::number(inputmodule->getInputmodulevalue().toInt()));
    }else if(m_inputtype == "TP22")
    {
        if(inputmodule->getInputmodulevalue().toInt() >= 580)
        this->database->HMiCT_Wheel2_TP2_U8 = inputmodule->getInputmodulevalue().toInt() - 580;
        ui->VehicleWheelset_tp22wheellbl->setText(QString::number(inputmodule->getInputmodulevalue().toInt()));
    }else if(m_inputtype == "TP23")
    {
        if(inputmodule->getInputmodulevalue().toInt() >= 580)
        this->database->HMiCT_Wheel3_TP2_U8 = inputmodule->getInputmodulevalue().toInt() - 580;
        ui->VehicleWheelset_tp23wheellbl->setText(QString::number(inputmodule->getInputmodulevalue().toInt()));
    }else if(m_inputtype == "TP24")
    {
        if(inputmodule->getInputmodulevalue().toInt() >= 580)
        this->database->HMiCT_Wheel4_TP2_U8 = inputmodule->getInputmodulevalue().toInt() - 580;
        ui->VehicleWheelset_tp24wheellbl->setText(QString::number(inputmodule->getInputmodulevalue().toInt()));
    }else if(m_inputtype == "code")
    {
        if(inputmodule->getInputmodulevalue().toInt() > 0 && inputmodule->getInputmodulevalue().toInt() <= 99)
        this->database->HMiCT_TrainNum_U8 =  inputmodule->getInputmodulevalue().toInt();
        ui->VehicleWheelset_traincodelbl->setText(QString::number(inputmodule->getInputmodulevalue().toInt()));
    }else if(m_inputtype == "mileage")
    {
        this->database->HMiCT_DistanceSet_HW_U16 =  inputmodule->getInputmodulevalue().toInt()/65536;
        this->database->HMiCT_DistanceSet_LW_U16 =  inputmodule->getInputmodulevalue().toInt()%65536;

        ui->VehicleWheelset_accmilelbl->setText(inputmodule->getInputmodulevalue());
    }

    ui->VehicleWheelset_tp11realwheellbl->setText(QString::number(this->database->CTiHM_Wheel1_TP1_U8+580));
    ui->VehicleWheelset_tp12realwheellbl->setText(QString::number(this->database->CTiHM_Wheel2_TP1_U8+580));
    ui->VehicleWheelset_tp13realwheellbl->setText(QString::number(this->database->CTiHM_Wheel3_TP1_U8+580));
    ui->VehicleWheelset_tp14realwheellbl->setText(QString::number(this->database->CTiHM_Wheel4_TP1_U8+580));
    ui->VehicleWheelset_tp21realwheellbl->setText(QString::number(this->database->CTiHM_Wheel1_TP2_U8+580));
    ui->VehicleWheelset_tp22realwheellbl->setText(QString::number(this->database->CTiHM_Wheel2_TP2_U8+580));
    ui->VehicleWheelset_tp23realwheellbl->setText(QString::number(this->database->CTiHM_Wheel3_TP2_U8+580));
    ui->VehicleWheelset_tp24realwheellbl->setText(QString::number(this->database->CTiHM_Wheel4_TP2_U8+580));

    QString tmp_code;
    tmp_code.sprintf("%02d",database->VCUtoALL_codeHigh*256+database->VCUtoALL_codeLow);
    ui->VehicleWheelset_realtraincodelbl->setText(tmp_code);
    ui->VehicleWheelset_realaccmilelbl->setText(QString::number(this->database->wR2Word2_Distance_high*65535 + this->database->wR2Word3_Distance_low));


    if(this->database->HMiCT_WheelSet_B1)
    {
        if(timer3scount[0]++ > 10)
        {
            timer3scount[0] = 0;
            this->database->HMiCT_WheelSet_B1  =false;
            ui->VehicleWheelset_wheelconfirmbtn->setStyleSheet(MY_BUTTON_UP);
            ui->VehicleWheelset_wheelconfirmbtn->setEnabled(true);
        }
    }else
    {
        timer3scount[0] = 0;
        ui->VehicleWheelset_wheelconfirmbtn->setStyleSheet(MY_BUTTON_UP);
        ui->VehicleWheelset_wheelconfirmbtn->setEnabled(true);
    }
    if(this->database->HMiCT_SaveTrainNum_B1)
    {
        if(timer3scount[1]++ > 10)
        {
            timer3scount[1] = 0;
            this->database->HMiCT_SaveTrainNum_B1 = false;
            ui->VehicleWheelset_traincodeconfirmbtn->setStyleSheet(MY_BUTTON_UP);
            ui->VehicleWheelset_traincodeconfirmbtn->setEnabled(true);
        }
    }else
    {
        timer3scount[1] = 0;
        ui->VehicleWheelset_traincodeconfirmbtn->setStyleSheet(MY_BUTTON_UP);
        ui->VehicleWheelset_traincodeconfirmbtn->setEnabled(true);
    }
    if(this->database->HMiCT_IDUDistanceSet_B1)
    {
        if(timer3scount[2]++ > 10)
        {
            timer3scount[2] = 0;
            this->database->HMiCT_IDUDistanceSet_B1  =false;
            ui->VehicleWheelset_accmileconfirmbtn->setStyleSheet(MY_BUTTON_UP);
            ui->VehicleWheelset_accmileconfirmbtn->setEnabled(true);
        }
    }else
    {
        timer3scount[2] = 0;
        ui->VehicleWheelset_accmileconfirmbtn->setStyleSheet(MY_BUTTON_UP);
        ui->VehicleWheelset_accmileconfirmbtn->setEnabled(true);
    }
}


void VehicleWheelSetPage::InputSelectEvent()
{
    m_inputtype = ((QPushButton *)this->sender())->whatsThis();

    if(m_inputtype.mid(0,1) == "T")
    {
        inputmodule->setInputmode(1);
        inputmodule->show();
    }else if(m_inputtype.mid(0,1) == "c")
    {
        inputmodule->setInputmode(2);
        inputmodule->show();
    }else if(m_inputtype.mid(0,1) == "m")
    {
        inputmodule->setInputmode(3);
        inputmodule->show();
    }

}
void VehicleWheelSetPage::on_VehicleWheelset_Button_PrePage_pressed()
{

}

void VehicleWheelSetPage::on_VehicleWheelset_Button_NextPage_pressed()
{
    this->database->HMiCT_WheelSet_B1  =false;
    this->database->HMiCT_SaveTrainNum_B1  =false;
    this->database->HMiCT_IDUDistanceSet_B1  =false;

    changePage(uVehicleParaSetPage);

}

void VehicleWheelSetPage::on_VehicleWheelset_Button_return_pressed()
{
    this->database->HMiCT_WheelSet_B1  =false;
    this->database->HMiCT_SaveTrainNum_B1  =false;
    this->database->HMiCT_IDUDistanceSet_B1  =false;
    changePage(uVehicleParaSetting);
}

void VehicleWheelSetPage::on_VehicleWheelset_wheelconfirmbtn_pressed()
{
    this->database->HMiCT_WheelSet_B1 = true;


    ParasettingPara->set("/Wheel/Wheel1_TP1",this->database->HMiCT_Wheel1_TP1_U8);
    ParasettingPara->set("/Wheel/Wheel2_TP1",this->database->HMiCT_Wheel2_TP1_U8);
    ParasettingPara->set("/Wheel/Wheel3_TP1",this->database->HMiCT_Wheel3_TP1_U8);
    ParasettingPara->set("/Wheel/Wheel4_TP1",this->database->HMiCT_Wheel4_TP1_U8);
    ParasettingPara->set("/Wheel/Wheel1_TP2",this->database->HMiCT_Wheel1_TP2_U8);
    ParasettingPara->set("/Wheel/Wheel2_TP2",this->database->HMiCT_Wheel2_TP2_U8);
    ParasettingPara->set("/Wheel/Wheel3_TP2",this->database->HMiCT_Wheel3_TP2_U8);
    ParasettingPara->set("/Wheel/Wheel4_TP2",this->database->HMiCT_Wheel4_TP2_U8);

    ui->VehicleWheelset_wheelconfirmbtn->setStyleSheet(MY_BUTTON_DOWN);
    ui->VehicleWheelset_wheelconfirmbtn->setEnabled(false);
}

void VehicleWheelSetPage::on_VehicleWheelset_traincodeconfirmbtn_pressed()
{
    this->database->HMiCT_SaveTrainNum_B1 = true;

    ParasettingPara->set("/TrainCode/Code",this->database->HMiCT_TrainNum_U8);

    this->database->DefaultTrainCode = this->database->HMiCT_TrainNum_U8;
    ui->VehicleWheelset_traincodeconfirmbtn->setStyleSheet(MY_BUTTON_DOWN);
    ui->VehicleWheelset_traincodeconfirmbtn->setEnabled(false);
}

void VehicleWheelSetPage::on_VehicleWheelset_accmileconfirmbtn_pressed()
{
    this->database->HMiCT_IDUDistanceSet_B1 = true;
    ui->VehicleWheelset_accmileconfirmbtn->setStyleSheet(MY_BUTTON_DOWN);
    ui->VehicleWheelset_accmileconfirmbtn->setEnabled(false);
}
