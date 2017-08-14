#include "basepage.h"

BasePage::BasePage(QWidget *parent) :
        QWidget(parent)
{
    if (parent != NULL)
    {
        connect(this, SIGNAL(changePage(int)), parent, SLOT(changePage(int)));
    }
}

int BasePage::currentPage = uVehicleRunPage;
Database *BasePage::database = NULL;

void BasePage::setMyBase(pagePosition position, QString name)
{
    if (position == uTop)
    {
        this->setGeometry(0, 0, this->width(), this->height());
    }
    else if (position == uMiddle)
    {
        this->setGeometry(0, 80, this->width(), this->height());
    }
    else if (position == uBottom)
    {
        this->setGeometry(0, 520, this->width(), this->height());
    }
    else if (position == uHuge)
    {
        this->setGeometry(0, 0, this->width(), this->height());
    }

    this->name = name;

    this->hide();
}

void BasePage::updatePage()
{

}
void BasePage::showEvent(QShowEvent *)
{

}
