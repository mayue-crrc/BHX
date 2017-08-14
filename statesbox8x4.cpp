#include "statesbox8x4.h"
#include "ui_statesbox8x4.h"

StatesBox8x4::StatesBox8x4(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::StatesBox8x4)
{
    ui->setupUi(this);
    //m_titlemode = 0;
    m_NameFontSize = 13;
    m_IntroFontSize = 13;
}

StatesBox8x4::~StatesBox8x4()
{
    delete ui;
}

void StatesBox8x4::Updatestate_boxstate(QList<QString> str,QList<int> color)
{
//    if(str.length() != color.length())
//    {
//        _LOG << "color and string list length not equal";
//        return;

//    }else
    if(str.length() > color.length())
    {
        for(int i = color.length(); i < str.length()  ; i++)
        {
            color.push_back(0);
        }
    }else if(str.length() < color.length())
    {
        for(int i = str.length(); i < color.length()  ; i++)
        {
            str.push_back("");
        }
    }
    //else
    {

        switch(m_titlemode)
        {
        case 0:
            ui->MC1->setGeometry(152,10,110,42);
            ui->MC2->setGeometry(476,10,110,42);
            ui->M1->show();
            ui->M2->show();
            break;
        case 1:
            ui->MC1->setGeometry(152,10,218,42);
            ui->MC2->setGeometry(368,10,218,42);
            ui->M1->hide();
            ui->M2->hide();
            break;
        }
        {
            QList<QLabel *> labels;

            labels << ui->state1 << ui->state1_2 << ui->state1_3 << ui->state1_4
                   << ui->state2 << ui->state2_2 << ui->state2_3 << ui->state2_4
                   << ui->state3 << ui->state3_2 << ui->state3_3 << ui->state3_4
                   << ui->state4 << ui->state4_2 << ui->state4_3 << ui->state4_4
                   << ui->state5 << ui->state5_2 << ui->state5_3 << ui->state5_4
                   << ui->state6 << ui->state6_2 << ui->state6_3 << ui->state6_4
                   << ui->state7 << ui->state7_2 << ui->state7_3 << ui->state7_4
                   << ui->state8 << ui->state8_2 << ui->state8_3 << ui->state8_4;

            for (int i = 0; i < str.length(); i ++)
            {
                labels.at(i)->setText(str.at(i));
                //set color
                // 1--green
                // 2--red
                // 3--gray
                // 4--lightgray
                // 5--yellow
                if(color.at(i)>10)
                {
                    _LOG << "color value invalid";

                    return;
                }
                switch(color.at(i))
                {
                case 1:
                    labels.at(i)->setStyleSheet(LABELCOLOR_GREEN+m_StateFontSize);
                    break;
                case 2:
                    labels.at(i)->setStyleSheet(LABELCOLOR_RED+m_StateFontSize);
                    break;
                case 3:
                    labels.at(i)->setStyleSheet(LABELCOLOR_GRAY+m_StateFontSize);
                    break;
                case 4:
                    labels.at(i)->setStyleSheet(LABELCOLOR_LIGHTGRAY+m_StateFontSize);
                    break;
                case 5:
                    labels.at(i)->setStyleSheet(LABELCOLOR_YELLOW+m_StateFontSize);
                    break;
                case 9:
                    labels.at(i)->setStyleSheet(LABELCOLOR_BACKGROUND+m_StateFontSize);
                    break;
                }
            }
      }
}

}
void StatesBox8x4::Updatestate_statename(QList<QString> name_str,QList<QString> intro_str)
{
    QList<QLabel *> labels,intro;

    labels << ui->name1
           << ui->name2
           << ui->name3
           << ui->name4
           << ui->name5
           << ui->name6
           << ui->name7
           << ui->name8;
    intro   << ui->intro1
            << ui->intro2
            << ui->intro3
            << ui->intro4
            << ui->intro5
            << ui->intro6
            << ui->intro7
            << ui->intro8;
    QString t_namefontsize = "font: "+QString::number(m_NameFontSize)+"px ;";
    QString t_introfontsize = "font: "+QString::number(m_IntroFontSize)+"px ;";
    for (int i = 0; i < name_str.length(); i ++)
    {
        labels.at(i)->setText(name_str.at(i));
        intro.at(i)->setText(intro_str.at(i));
        labels.at(i)->setStyleSheet(t_namefontsize);
        intro.at(i)->setStyleSheet(t_introfontsize);

    }
}
void StatesBox8x4::SetBoxTitle(int titlemode)
{
    m_titlemode = titlemode;
}
void StatesBox8x4::SetBoxTitleStr(QString str1,QString str2)
{
    ui->MC1->setText(str1);
    ui->MC2->setText(str2);
}

void StatesBox8x4::SetBoxNameFontsize(int fontsize)
{
    m_NameFontSize = fontsize;
}

void StatesBox8x4::SetBoxIntroFontsize(int fontsize)
{
    m_IntroFontSize = fontsize;
}
void  StatesBox8x4::SetBoxStateFontsize(QString fontsize)
{
    m_StateFontSize = fontsize;
}
