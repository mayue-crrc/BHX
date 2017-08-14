#include "ctrlinputmodule.h"
#include "ui_ctrlinputmodule.h"

CtrlInputModule::CtrlInputModule(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CtrlInputModule)
{
    ui->setupUi(this);
    Inputvalue = "";
    m_value1 = m_value2 = m_value3 = "" ;
    warnningdialog = new WarnningDialog(this);
    warnningdialog->setGeometry(40,20,warnningdialog->width(),warnningdialog->height());
    warnningdialog->hide();
}

CtrlInputModule::~CtrlInputModule()
{
    delete ui;
}
QString CtrlInputModule::getInputmodulevalue()
{
    switch(m_mode)
    {
    case 1:
        return m_value1;
        break;
    case 2:
        return m_value2;
        break;
    case 3:
        return m_value3;
        break;
    }
}

void CtrlInputModule::on_CtrlInputModule_Button_Num0_clicked()
{
    if(Inputvalue.length() < 10)
    Inputvalue = Inputvalue +"0";
    ui->CtrlInputModule_Label_InputPW->setText(Inputvalue);
}

void CtrlInputModule::on_CtrlInputModule_Button_Num1_clicked()
{
    if(Inputvalue.length() < 10)
    Inputvalue = Inputvalue +"1";
    ui->CtrlInputModule_Label_InputPW->setText(Inputvalue);

}

void CtrlInputModule::on_CtrlInputModule_Button_Num2_clicked()
{
    if(Inputvalue.length() < 10)
    Inputvalue = Inputvalue +"2";
    ui->CtrlInputModule_Label_InputPW->setText(Inputvalue);

}

void CtrlInputModule::on_CtrlInputModule_Button_Num3_clicked()
{
    if(Inputvalue.length() < 10)
    Inputvalue = Inputvalue +"3";
    ui->CtrlInputModule_Label_InputPW->setText(Inputvalue);

}

void CtrlInputModule::on_CtrlInputModule_Button_Num4_clicked()
{
    if(Inputvalue.length() < 10)
    Inputvalue = Inputvalue +"4";
    ui->CtrlInputModule_Label_InputPW->setText(Inputvalue);
}

void CtrlInputModule::on_CtrlInputModule_Button_Num5_clicked()
{
    if(Inputvalue.length() < 10)
    Inputvalue = Inputvalue +"5";
    ui->CtrlInputModule_Label_InputPW->setText(Inputvalue);

}

void CtrlInputModule::on_CtrlInputModule_Button_Num6_clicked()
{
    if(Inputvalue.length() < 10)
    Inputvalue = Inputvalue +"6";
    ui->CtrlInputModule_Label_InputPW->setText(Inputvalue);

}

void CtrlInputModule::on_CtrlInputModule_Button_Num7_clicked()
{
    if(Inputvalue.length() < 10)
    Inputvalue = Inputvalue +"7";
    ui->CtrlInputModule_Label_InputPW->setText(Inputvalue);

}

void CtrlInputModule::on_CtrlInputModule_Button_Num8_clicked()
{
    if(Inputvalue.length() < 10)
    Inputvalue = Inputvalue +"8";
    ui->CtrlInputModule_Label_InputPW->setText(Inputvalue);

}

void CtrlInputModule::on_CtrlInputModule_Button_Num9_clicked()
{
    if(Inputvalue.length() < 10)
    Inputvalue = Inputvalue +"9";
    ui->CtrlInputModule_Label_InputPW->setText(Inputvalue);

}

void CtrlInputModule::on_CtrlInputModule_Button_clear_clicked()
{
    Inputvalue = "";
    ui->CtrlInputModule_Label_InputPW->setText(Inputvalue);
}

void CtrlInputModule::on_CtrlInputModule_Button_confirm_clicked()
{
    switch(m_mode)
    {
    case 1:///wheel
        if(Inputvalue.toInt() > 660 || Inputvalue.toInt() < 580)
        {
            warnningdialog->setDialogstyle("轮径设置范围为\n580~660mm","background-color: rgb(51, 153, 255);border:3px solid rgb(0,0,0);");
            warnningdialog->show();
            m_value1 = "";
            Inputvalue = "";
        }else
        {
            //todo send value
            m_value1 = Inputvalue;
            Inputvalue = "";
            this->close();
        }
        ui->CtrlInputModule_Label_InputPW->setText("");

        break;
    case 2:///code
        if(Inputvalue.toInt() > 99 || Inputvalue.toInt() < 0)
        {
            warnningdialog->setDialogstyle("车号设置范围为\n00~99","background-color: rgb(51, 153, 255);border:3px solid rgb(0,0,0);");
            warnningdialog->show();
            m_value2 = "";
            Inputvalue = "";
        }else
        {
            //todo send value
            m_value2 = Inputvalue;
            Inputvalue = "";
            this->close();
        }

        ui->CtrlInputModule_Label_InputPW->setText("");
        break;
    case 3:///mile
        //todo send value
        m_value3 = Inputvalue;
        Inputvalue = "";
        ui->CtrlInputModule_Label_InputPW->setText("");
        this->close();
        break;
    }
}
void CtrlInputModule::setInputmode(int mode)
{
    m_mode = mode;
}

void CtrlInputModule::on_CtrlInputModule_Button_Num0_2_clicked()
{
    this->close();
}
