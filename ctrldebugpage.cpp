#include "ctrldebugpage.h"
#include "ui_ctrldebugpage.h"

CtrlDebugPage::CtrlDebugPage(QWidget *parent) :
    BasePage(parent),
    ui(new Ui::CtrlDebugPage)
{
    ui->setupUi(this);
    inputtype  =0;
    updatetimer = new QTimer;
    connect(updatetimer,SIGNAL(timeout()),this,SLOT(updatedata()));
    ui->radioButton_2->click();
}

CtrlDebugPage::~CtrlDebugPage()
{
    delete ui;
}

void CtrlDebugPage::getCrrcCanObj(CrrcCan* ptr)
{
    this->CanDate = ptr;

}

void CtrlDebugPage::on_pushButtonset_pressed()
{
        switch(inputtype)
        {
        case 0:
            this->CanDate->setBool(portstr.toInt(0,16),bytestr.toInt(),bitstr.toInt(),true);
            break;
        case 1:
            this->CanDate->setUnsignedChar(portstr.toInt(0,16),bytestr.toInt(),bitstr.toInt(0,16));
            break;
        case 2:
            this->CanDate->setUnsignedInt(portstr.toInt(0,16),bytestr.toInt(),bitstr.toInt(0,16));
            break;
        case 3:
            this->CanDate->setSignedInt(portstr.toInt(0,16),bytestr.toInt(),bitstr.toInt(0,16));
            break;
        }


}

void CtrlDebugPage::on_pushButtonclear_pressed()
{
    if(selection == 1)
    {
        portstr = "";
    }else if(selection == 2)
    {
        bytestr = "";
    }else if(selection == 3)
    {
        bitstr = "";
    }
}



void CtrlDebugPage::on_radioButton_2_clicked()
{
    inputtype = 0;
}

void CtrlDebugPage::on_radioButton_clicked()
{
    inputtype  =1;
}

void CtrlDebugPage::on_radioButton_3_clicked()
{
    inputtype  =2;
}

void CtrlDebugPage::on_radioButton_4_pressed()
{
    inputtype  =3;
}
void CtrlDebugPage::updatedata()
{
    portstr = ui->lineEditport->text();
    bytestr = ui->lineEditbyteoffset->text();
    bitstr = ui->lineEditbitoffset->text();
    QList<unsigned short int> ports = this->CanDate->getAllsourcePorts();

    QString data;

    foreach (unsigned short int port,ports)
    {
        QString porttmp;
        porttmp.sprintf("%03X",port);
        data = data+ porttmp +":";
        for(int i = 0; i < 8; i++)
        {
            QString tmp;
            tmp.sprintf("%02X",this->CanDate->getUnsignedChar(port,i));
            data = data +" " +tmp;
        }
        data = data +" ";

    }
    ui->textBrowser->setText(data);


}
void CtrlDebugPage::starttimer()
{
    updatetimer->start(333);
}

void CtrlDebugPage::on_pushButtonreset_pressed()
{
    this->CanDate->clearAllSourcePort();
}
void CtrlDebugPage::keyPressEvent(QKeyEvent *event)
{
    if (event->key() == Qt::Key_Escape)
    {
        // close the window
        this->close();
    }
}
