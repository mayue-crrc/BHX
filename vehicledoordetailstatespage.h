#ifndef VEHICLEDOORDETAILSTATESPAGE_H
#define VEHICLEDOORDETAILSTATESPAGE_H

#include <basepage.h>

namespace Ui {
    class VehicleDoorDetailStatesPage;
}

class VehicleDoorDetailStatesPage : public BasePage
{
    Q_OBJECT

public:
    explicit VehicleDoorDetailStatesPage(QWidget *parent = 0);
    ~VehicleDoorDetailStatesPage();
    void updatePage();
    void showEvent(QShowEvent *);
private:
    Ui::VehicleDoorDetailStatesPage *ui;
    void UpdateDoorStates(QList<int> color);

private slots:
    void on_VehicleDoorDetailStatesPage_button_back_pressed();
};

#endif // VEHICLEDOORDETAILSTATESPAGE_H
