#ifndef STATESBOX8X4_H
#define STATESBOX8X4_H

#include <QWidget>
#include <QList>
#include "global.h"

namespace Ui {
    class StatesBox8x4;
}

class StatesBox8x4 : public QWidget
{
    Q_OBJECT

public:
    explicit StatesBox8x4(QWidget *parent = 0);
    ~StatesBox8x4();
    void Updatestate_boxstate(QList<QString> str,QList<int> color);
    void Updatestate_statename(QList<QString> name_str,QList<QString> intro_str);
    void SetBoxTitle(int titlemode);
    void SetBoxNameFontsize(int fontsize);
    void SetBoxIntroFontsize(int fontsize);
    void SetBoxStateFontsize(QString fontsize);
    void SetBoxTitleStr(QString str1,QString str2);

private:
    Ui::StatesBox8x4 *ui;
    int m_titlemode;
    int m_NameFontSize;
    int m_IntroFontSize;
    QString m_StateFontSize;

};

#endif // STATESBOX8X4_H
