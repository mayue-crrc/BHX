#ifndef VEHICLEALARMWIDGET_H
#define VEHICLEALARMWIDGET_H

#include <QWidget>
namespace Ui {
    class VehicleAlarmWidget;
}

class VehicleAlarmWidget : public QWidget
{
    Q_OBJECT

public:
    explicit VehicleAlarmWidget(QWidget *parent = 0);
    ~VehicleAlarmWidget();
    void setBackgroundStylesheet(QString style);
    void setLabelgroundText(QString style);
    void setLabelStylesheet(QString style);
    bool res_pageclose;
    void setButtonPos(int x,int y,int w,int h);
    void setLablePos(int x,int y,int w,int h);

private:
    Ui::VehicleAlarmWidget *ui;
    QString m_BGStylesheet,m_LStylesheet,m_Ltext;
    void UpdatePage();


private slots:
    void on_pushButton_pressed();
};

#endif // VEHICLEALARMWIDGET_H
