#ifndef STATESBOX8X2_H
#define STATESBOX8X2_H

#include <QWidget>
#include <QList>
#include "global.h"
namespace Ui {
    class StatesBox8x2;
}

class StatesBox8x2 : public QWidget
{
    Q_OBJECT

public:
    explicit StatesBox8x2(QWidget *parent = 0);
    ~StatesBox8x2();
    void Updatestate_boxstate(QList<QString> str,QList<int> color);
    void Updatestate_statename(QList<QString> name_str,QList<QString> intro_str);
private:
    Ui::StatesBox8x2 *ui;
};

#endif // STATESBOX8X2_H
