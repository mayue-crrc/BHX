#include "ctrlspeedometer.h"
#include "ui_ctrlspeedometer.h"

CtrlSpeedometer::CtrlSpeedometer(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CtrlSpeedometer)
{
    ui->setupUi(this);
    m_value = 0;
}

CtrlSpeedometer::~CtrlSpeedometer()
{
    delete ui;
}
void CtrlSpeedometer::paintEvent(QPaintEvent *e)
{
    QPainter painter(this);
    QPen pen;
    QFont font;
    QBrush brush;

    painter.setRenderHint(QPainter::Antialiasing,true);

    pen.setColor(WHITE);
    pen.setWidth(2);
    painter.setPen(pen);

    font.setFamily("vuArial");
    font.setPixelSize(15);
    font.setWeight(QFont::Normal);
    painter.setFont(font);



    painter.setBrush(DARKGREEN);
    painter.drawEllipse(QPoint(115,115),100,100);
    painter.translate(this->width() / 2,this->height() / 2 );



    painter.drawText(QRect(-70,25,25,20),"0");
    painter.drawText(QRect(-80,0,25,20),"10");
    painter.drawText(QRect(-80,-35,25,20),"20");
    painter.drawText(QRect(-60,-60,25,20),"30");
    painter.drawText(QRect(-40,-80,25,20),"40");
    painter.drawText(QRect(-12.5,-85,25,20),"50");
    painter.drawText(QRect(20,-80,25,20),"60");


    pen.setColor(RED);
    painter.setPen(pen);
    painter.drawText(QRect(40,-60,25,20),"70");
    painter.drawText(QRect(60,-35,25,20),"80");
    painter.drawText(QRect(60,0,25,20),"90");
    painter.drawText(QRect(45,25,35,20),"100");

    pen.setColor(YELLOW);
    painter.setPen(pen);
    font.setPixelSize(24);
    painter.setFont(font);
    painter.drawText(QRect(-35,-10,100,25),"车   速");



    painter.rotate(60);
    //pen.setWidth(1);
    for(int i = 0; i <  50; i ++)
    {
        if(i<35)
        {
            pen.setColor(GREEN);
        }else
        {
            pen.setColor(RED);
        }
        painter.setPen(pen);
        if(i%5 == 0)
        {
            painter.drawLine(0,85,0,98);
        }else
        {
            painter.drawLine(0,90,0,98);
        }
        if (i == (m_value/2))
        {//draw speed pointer by speed value
            static const QPointF points[3] = {
                 QPointF(-5, 0),
                 QPointF(5, 0),
                 QPointF(0, 70)
               };
            painter.setBrush(QBrush(QColor(255,0,0,188)));
            painter.setPen(QPen(QColor(255,0,0,128), 0));
            painter.drawPolygon(points, 3);
        }
        painter.rotate(4.8);
    }
    painter.rotate(60);

    pen.setColor(QColor(0,255,250));
    font.setPixelSize(45);

    painter.setPen(pen);
    painter.setFont(font);
    QString t_speed;
    t_speed.sprintf("%02d",m_value);
    painter.drawText(QRect(-22,45,80,50),t_speed);
    //painter.drawText(QRect(-20,75,45,20),"km/h");


}
void CtrlSpeedometer::setSpeenometerValue(int value)
{
    m_value = value;
    this->update();
}
