#include "vehiclealarmwidget.h"
#include "ui_vehiclealarmwidget.h"

VehicleAlarmWidget::VehicleAlarmWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::VehicleAlarmWidget)
{
    ui->setupUi(this);

    ui->VA_background->setStyleSheet(m_BGStylesheet);
    ui->VA_text->setStyleSheet(m_LStylesheet);
    ui->VA_text->setWordWrap(true);
    ui->VA_text->setText(m_Ltext);
    res_pageclose = false;
}

VehicleAlarmWidget::~VehicleAlarmWidget()
{
    delete ui;
}
void VehicleAlarmWidget::UpdatePage()
{
    ui->VA_background->setStyleSheet(m_BGStylesheet);
    ui->VA_text->setStyleSheet(m_LStylesheet);
    ui->VA_text->setText(m_Ltext);
}
void VehicleAlarmWidget::setBackgroundStylesheet(QString style)
{
    m_BGStylesheet = style;
    this->UpdatePage();
}
void VehicleAlarmWidget::setLabelgroundText(QString str)
{
    m_Ltext = str;
    this->UpdatePage();
}
void VehicleAlarmWidget::setLabelStylesheet(QString style)
{
    m_LStylesheet = style;
    this->UpdatePage();
}

void VehicleAlarmWidget::on_pushButton_pressed()
{
    res_pageclose = true;
    this->hide();
}
void VehicleAlarmWidget::setButtonPos(int x,int y,int w,int h)
{
    this->ui->pushButton->setGeometry(x,y,w,h);
}
void VehicleAlarmWidget::setLablePos(int x,int y,int w,int h)
{
    this->ui->VA_text->setGeometry(x,y,w,h);
}
