#ifndef HEADERPAGE_H
#define HEADERPAGE_H

#include "basepage.h"
#include "QDateTime"
#include "crrcfault.h"
namespace Ui {
    class HeaderPage;
}

class HeaderPage : public BasePage
{
    Q_OBJECT

public:
    explicit HeaderPage(QWidget *parent = 0);
    ~HeaderPage();
    void updatePage();
    void showEvent(QShowEvent *);
    void GetcrrcFaultInfo(CrrcFault* CrrcFault);
    void showHelpBtn(bool flg);
private:
    Ui::HeaderPage *ui;
    CrrcFault* m_crrcfault;
public slots:
    void on_HelpitemBtn_pressed();
    void on_CurrentFaultBtn_pressed();
signals:
    void HelpPageClicked();
};

#endif // HEADERPAGE_H
