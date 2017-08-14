#ifndef CTRLVISIONLIFESIGNALFORM_H
#define CTRLVISIONLIFESIGNALFORM_H

#include <QWidget>

namespace Ui {
    class CtrlVisionLifesignalForm;
}

class CtrlVisionLifesignalForm : public QWidget
{
    Q_OBJECT

public:
    explicit CtrlVisionLifesignalForm(QWidget *parent = 0);
    ~CtrlVisionLifesignalForm();
    void initialName(QList<QString> &names);
    void updateVision(QList<QString> &vision);
    void updateLifesignal(QList<QString> &lifesignal);

private:
    Ui::CtrlVisionLifesignalForm *ui;
};

#endif // CTRLVISIONLIFESIGNALFORM_H
