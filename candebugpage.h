#ifndef CANDEBUGPAGE_H
#define CANDEBUGPAGE_H

#include <QWidget>
#include "basepage.h"
#include "crrccan.h"

namespace Ui {
    class CanDebugPage;
}

class CanDebugPage : public BasePage
{
    Q_OBJECT

public:
    explicit CanDebugPage(QWidget *parent = 0);
    ~CanDebugPage();
    void paintEvent(QPaintEvent *);
    void updatePage();
    void installCan(CrrcCan *pointer);

private:
    Ui::CanDebugPage *ui;
    CrrcCan *crrcCan;
    int maxpage,currentpage;
private slots:
    void on_CanDebugPage_Button_nextpage_clicked();
    void on_CanDebugPage_Button_prepage_clicked();
    void on_CanDebugPage_Button_back_clicked();
};

#endif // CANDEBUGPAGE_H
