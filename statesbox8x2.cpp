#include "statesbox8x2.h"
#include "ui_statesbox8x2.h"

StatesBox8x2::StatesBox8x2(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::StatesBox8x2)
{
    ui->setupUi(this);
}

StatesBox8x2::~StatesBox8x2()
{
    delete ui;
}
void StatesBox8x2::Updatestate_boxstate(QList<QString> str,QList<int> color)
{
//    if(str.length() != color.length())
//    {
//        _LOG << "color and string list length not equal";
//        return;

//    }else

    {
        QList<QLabel *> labels;

        labels << ui->state1 << ui->state1_2
               << ui->state2 << ui->state2_2
               << ui->state3 << ui->state3_2
               << ui->state4 << ui->state4_2
               << ui->state5 << ui->state5_2
               << ui->state6 << ui->state6_2
               << ui->state7 << ui->state7_2
               << ui->state8 << ui->state8_2;

        for (int i = 0; i < str.length(); i ++)
        {
            labels.at(i)->setText(str.at(i));
            //set color
            // 1--green
            // 2--red
            // 3--gray
            // 4--lightgray
            // 5--yellow
            if(color.at(i)>5)
            {
                _LOG << "color value invalid";

                return;
            }
            switch(color.at(i))
            {
            case 1:
                labels.at(i)->setStyleSheet(LABELCOLOR_GREEN);
                break;
            case 2:
                labels.at(i)->setStyleSheet(LABELCOLOR_RED);
                break;
            case 3:
                labels.at(i)->setStyleSheet(LABELCOLOR_GRAY);
                break;
            case 4:
                labels.at(i)->setStyleSheet(LABELCOLOR_LIGHTGRAY);
                break;
            case 5:
                labels.at(i)->setStyleSheet(LABELCOLOR_YELLOW);
                break;
            }
        }
    }

}
void StatesBox8x2::Updatestate_statename(QList<QString> name_str,QList<QString> intro_str)
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

    for (int i = 0; i < name_str.length(); i ++)
    {
        labels.at(i)->setText(name_str.at(i));
        intro.at(i)->setText(intro_str.at(i));
    }
}
