#include "candebugpage.h"
#include "ui_candebugpage.h"
#include <QPainter>
#include <QDebug>

CanDebugPage::CanDebugPage(QWidget *parent) :
    BasePage(parent),
    ui(new Ui::CanDebugPage)
{
    ui->setupUi(this);
    this->crrcCan = NULL;
    currentpage = 1;
}

CanDebugPage::~CanDebugPage()
{
    delete ui;
}

void CanDebugPage::installCan(CrrcCan *pointer)
{
    this->crrcCan = pointer;
}

void CanDebugPage::updatePage()
{
    this->ui->CanDebugPage_label_mil->setText("累计里程\n\n" + QString::number(this->database->wR3Word3_wdiDistance)+
                                              "km\n"+QString::number(this->database->wR3Word3_wdiDistanceMW) + "m");
    this->update();
}

void CanDebugPage::paintEvent(QPaintEvent *)
{
    QPainter *painter = new QPainter(this);
    QRect rect;
    QList<unsigned short int> ports = this->crrcCan->getAllPorts();
    ports<<this->crrcCan->getAllsourcePorts();
    maxpage = ports.size()/9+1;
    ui->CanDebugPage_Label_Page->setText(QString::number(currentpage)+ "\n/\n"+QString::number(maxpage));

    for (int i = 0; i < 10; i ++)
    {
        for (int j = 0; j < 10; j ++)
        {
            rect = QRect(10 + 70 * j, 20 + 40 * i, 70, 40);

            // draw rect
            painter->setPen(Qt::darkGray);
            QLinearGradient gradient(rect.left(), rect.top(), rect.right(), rect.bottom());
            gradient.setColorAt(0, Qt::white);
            gradient.setColorAt(1, Qt::gray);
            painter->setBrush(gradient);
            painter->drawRect(rect);
            // painter->setFont(D_DEFAULT_FONT);
            if(ports.size() < 1)///no can ports
            {

            }else
            {
                // draw text
                if (i == 0)
                {
                    painter->setPen(QPen(Qt::black, 1));
                }
                else if (i % 3 == 0)
                {
                    painter->setPen(QPen(Qt::blue, 1));
                }
                else if (i % 3 == 1)
                {
                    painter->setPen(QPen(Qt::red, 1));
                }
                else
                {
                    painter->setPen(QPen(Qt::green, 1));
                }

                if (i == 0 && j == 0)
                {
                    painter->drawText(rect, Qt::AlignCenter, QString("Port"));
                }
                else if (i == 0 && j == 9)
                {
                    painter->drawText(rect, Qt::AlignCenter, QString("Refresh"));
                }
                else if (i == 0)
                {
                    painter->drawText(rect, Qt::AlignCenter, QString::number(j));
                }
                else
                {
                    QString number;


                    if (j == 0)
                    {
                        if (i - 1 + (currentpage-1)*9< ports.size())
                        {
                            number.sprintf("%03X", ports.at(i - 1 + (currentpage-1)*9));
                        }
                        else
                        {
                            number.clear();
                        }
                    }
                    else if(j < 9)
                    {
                        if (i - 1 + (currentpage-1)*9< ports.size())
                        {
                            number.sprintf("%03X", this->crrcCan->getUnsignedChar(ports.at(i - 1 + (currentpage-1)*9), j - 1));
                        }
                        else
                        {
                            number.clear();
                        }
                    }else ///j==9 refresh time
                    {
                        if (i - 1 + (currentpage-1)*9< ports.size())
                        {
                            number = QString::number(this->crrcCan->getPortRefreshTime(ports.at(i - 1 + (currentpage-1)*9)));
//                            if(this->crrcCan->getPortState(ports.at(i - 1 + (currentpage-1)*9)))
//                            {
//                                number = "true";
//                            }else
//                            {
//                                number = "false";
//                            }
                        } else
                        {
                            number.clear();
                        }


                    }
                    painter->drawText(rect, Qt::AlignCenter, number);

                 }

            }



            // painter->restore();
        }
    }
    painter->end();
}

void CanDebugPage::on_CanDebugPage_Button_back_clicked()
{
    changePage(uVehicleParaSetting);
}

void CanDebugPage::on_CanDebugPage_Button_prepage_clicked()
{
    if(currentpage > 1)
    {
        currentpage--;
    }
}

void CanDebugPage::on_CanDebugPage_Button_nextpage_clicked()
{

    if(currentpage < maxpage)
    {
        currentpage ++;
    }
}
