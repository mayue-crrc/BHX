#ifndef NAVIGATORPAGE_H
#define NAVIGATORPAGE_H

#include "basepage.h"

namespace Ui {
    class NavigatorPage;
}

class NavigatorPage : public BasePage
{
    Q_OBJECT

public:
    explicit NavigatorPage(QWidget *parent = 0);
    ~NavigatorPage();
    void showEvent(QShowEvent *);

private:
    Ui::NavigatorPage *ui;
    void ResetAllBtnUP();

private slots:
    void on_NButton8_pressed();
    void on_NButton7_pressed();
    void on_NButton6_pressed();
    void on_NButton5_pressed();
    void on_NButton4_pressed();
    void on_NButton3_pressed();
    void on_NButton2_pressed();
    void on_NButton1_pressed();
};

#endif // NAVIGATORPAGE_H
