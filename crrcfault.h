#ifndef CRRCFAULT_H
#define CRRCFAULT_H

#include <QString>
#include <QStringList>

#include <QList>
#include <QMap>

#include "qdatetime.h"
#include "qtimer.h"

class CrrcCan;

struct fault_type
{
    unsigned short int port;
    unsigned char byte, bit;
    bool virtualValue;
    QString code, name, device, position, description;
};

struct current_fault_type
{
    unsigned short int key;
    QString start, code, name, position, device, description;
};
//struct step_fault_type
//{
//    struct current_fault_type currentfaulttype;
//    bool status;
//};

struct history_fault_type
{
    QString start, end, code, name, position, device, description;
};

class CrrcFault : public QObject
{
    Q_OBJECT

public:
    CrrcFault(QString faultListPath, QString historyFilePath);
    void synchronize(CrrcCan *crrcCan);
    QString getCurrentFaultDate(unsigned short int index) const;
    QString getCurrentFaultTime(unsigned short int index) const;
    QString getCurrentFaultCode(unsigned short int index) const;
    QString getCurrentFaultName(unsigned short int index) const;
    QString getCurrentFaultDevice(unsigned short int index) const;
    QString getCurrentFaultPosition(unsigned short int index) const;
    QString getCurrentFaultDescription(unsigned short int index) const;
    unsigned short int getCurrentFaultListSize() const;
    QString getHistoryFaultStartDate(unsigned short int index) const;
    QString getHistoryFaultStartTime(unsigned short int index) const;
    QString getHistoryFaultEndDate(unsigned short int index) const;
    QString getHistoryFaultEndTime(unsigned short int index) const;
    QString getHistoryFaultCode(unsigned short int index) const;
    QString getHistoryFaultName(unsigned short int index) const;
    QString getHistoryFaultDevice(unsigned short int index) const;
    QString getHistoryFaultPosition(unsigned short int index) const;
    QString getHistoryFaultDescription(unsigned short int index) const;
    unsigned short int getHistoryFaultListSize() const;
    // add confirmfault list
    void deleteAllconfirmFault();
    void deleteConfirmFault(unsigned short int index);
    QString getConfirmFaultDate(unsigned short int index) const;
    QString getConfirmFaultTime(unsigned short int index) const;
    QString getConfirmFaultCode(unsigned short int index) const;
    QString getConfirmFaultName(unsigned short int index) const;
    QString getConfirmFaultDevice(unsigned short int index) const;
    QString getConfirmFaultPosition(unsigned short int index) const;
    QString getConfirmFaultDescription(unsigned short int index) const;
    unsigned short int getConfirmFaultListSize() const;

    // add new fault occur func
    bool NewFaultOccur;


    QString getFaultListFileVersion();
    QString getCrrcFaultVersion();
    unsigned short int getFaultTypeSize() const;
    void printAllFaultType() const;
    QStringList getStepFaultPosition();
    QStringList getStepFaultCode();
    QList<bool> getStepFaultStatus();
    void ClearStepFault();
    void getLocalDateTime(QDateTime datetime);

private:
//    QList<step_fault_type> stepFaultList;
//    QList<step_fault_type> stepFaultList_lasttime;
//    bool stepfaultflg;
    QStringList m_StepFaultPosition;
    QStringList m_StepFaultCode;
    QList<bool> m_stepFaultStatus;
    const QString faultListFilePath, historyFilePath;
    QString faultListFileVersion;
    QMap<unsigned short int, fault_type> faultList;
    void readFaultTypeListFile();
    void readHistoryFaultFile();
    void writeHistoryFaultFile() const;
    bool checkItemExist(unsigned short int key) const;
    void removeItem(unsigned short int key);
    QDateTime m_Localdatetime;
    QList<history_fault_type> historyFaultList;
    QList<current_fault_type> currentFaultList;
    QList<current_fault_type> confirmFaultList;

    QTimer *timer;
    QTimer *HVACtimer;



private slots:
    void Delay200s();
    void Delay120s();

};

#endif // CRRCFAULT_H
