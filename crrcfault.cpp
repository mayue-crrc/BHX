#include "crrcfault.h"
#include "crrccan.h"
#include <QFile>
#include <QStringList>
#include <QDateTime>
#include <stdlib.h>

#define _CRRC_FAULT_VERSION 1.3
#define _CRRC_MAX_HISTORY_FAULT_RECORD 1000
#define _CRRC_PORT_SIZE 8

CrrcFault::CrrcFault(QString faultListFilePath, QString historyFilePath)
    : faultListFilePath(faultListFilePath), historyFilePath(historyFilePath)
{
    this->readFaultTypeListFile();
    this->readHistoryFaultFile();
    //stepfaultflg = false;
    timer = new QTimer;
    connect(timer, SIGNAL(timeout()),SLOT(Delay200s()));
    timer->start(200000);

    HVACtimer = new QTimer;
    connect(HVACtimer, SIGNAL(timeout()),SLOT(Delay120s()));
    HVACtimer->start(120000);
    NewFaultOccur = false;

}
void CrrcFault::getLocalDateTime(QDateTime datetime)
{
    this->m_Localdatetime = datetime;
}
void CrrcFault::Delay200s()
{
    timer->stop();
}
void CrrcFault::Delay120s()
{
    HVACtimer->stop();
}
void CrrcFault::synchronize(CrrcCan *crrcCan)
{
    if (NULL == crrcCan)
    {
        qDebug() << "there is no CrrcCan class, please check it";

        return;
    }
    bool tmp_NewFaultOccur  = false;

    foreach (unsigned short int key, this->faultList.keys())
    {
        if(!crrcCan->getCanportexist(faultList[key].port))
        {
            //not defined ports ;
        }else
        {
            if(timer->isActive() && faultList[key].device == "PIS")
            {
                continue;
            }
            if(HVACtimer->isActive() && faultList[key].device == "HVAC")
            {
                continue;
            }
            if (faultList[key].virtualValue == crrcCan->getBool(faultList[key].port, faultList[key].byte, faultList[key].bit))
            {
               if (this->checkItemExist(key) == false)
               {
                    current_fault_type currentFaultType;
                    history_fault_type historyFaultType;

                    currentFaultType.key = key;
                    //currentFaultType.start = QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss");
                    currentFaultType.start =  m_Localdatetime.toString("yyyy-MM-dd hh:mm:ss");
                    currentFaultType.name = faultList[key].name;
                    currentFaultType.code = faultList[key].code;
                    currentFaultType.position = faultList[key].position;
                    currentFaultType.device = faultList[key].device;
                    currentFaultType.description = faultList[key].description;

                    //historyFaultType.start = QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss");
                    historyFaultType.start = m_Localdatetime.toString("yyyy-MM-dd hh:mm:ss");
                    historyFaultType.end = QString("");
                    historyFaultType.code = faultList[key].code;
                    historyFaultType.name = faultList[key].name;
                    historyFaultType.position = faultList[key].position;
                    historyFaultType.device = faultList[key].device;
                    historyFaultType.description = faultList[key].description;

                    QString t_stepfaultPosition = currentFaultType.position;
                    QString t_stepfaultcode = currentFaultType.code;

                    m_StepFaultCode<<t_stepfaultcode;
                    m_StepFaultPosition<<t_stepfaultPosition;
                    m_stepFaultStatus<<true;

                    this->currentFaultList.push_front(currentFaultType);

                    // inset confirm fault list
                    this->confirmFaultList.push_front(currentFaultType);
                    tmp_NewFaultOccur = true;

                    if (this->historyFaultList.size() >= _CRRC_MAX_HISTORY_FAULT_RECORD)
                    {
                        this->historyFaultList.removeLast();
                    }

                    this->historyFaultList.push_front(historyFaultType);
                    this->writeHistoryFaultFile();
               }
            }
            else if (this->checkItemExist(key) == true)
            {
                for (int i = 0; i < this->historyFaultList.size(); i ++)
                {
                    // to find the error item in the history error list
                    if (this->historyFaultList.at(i).code == this->faultList[key].code
                            && this->historyFaultList.at(i).position == this->faultList[key].position)
                    {
                        history_fault_type historyFaultType;

                        historyFaultType.start = this->historyFaultList.at(i).start;
                        //historyFaultType.end = QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss");
                        historyFaultType.end = m_Localdatetime.toString("yyyy-MM-dd hh:mm:ss");
                        historyFaultType.name = this->historyFaultList.at(i).name;
                        historyFaultType.code = this->historyFaultList.at(i).code;
                        historyFaultType.device = this->historyFaultList.at(i).device;
                        historyFaultType.position = this->historyFaultList.at(i).position;
                        historyFaultType.description = this->historyFaultList.at(i).description;

                        QString t_stepfaultPosition = historyFaultType.position;
                        QString t_stepfaultcode = historyFaultType.code;

                        m_StepFaultCode<<t_stepfaultcode;
                        m_StepFaultPosition<<t_stepfaultPosition;
                        m_stepFaultStatus<<false;

                        this->historyFaultList.replace(i, historyFaultType);
                        this->writeHistoryFaultFile();
                        break;
                    }
                }

                this->removeItem(key);
            }

            this->NewFaultOccur = tmp_NewFaultOccur;
        }
    }


}

QString CrrcFault::getCurrentFaultDate(unsigned short int index) const
{
    if (index >= this->currentFaultList.size())
    {
        qDebug() << "the index is larger than the current fault list" << __FILE__ << __LINE__;

        return QString("");
    }
    else
    {
        QDateTime dateTime = QDateTime::fromString(this->currentFaultList.at(index).start, QString("yyyy-MM-dd hh:mm:ss"));

        return dateTime.toString("yyyy-MM-dd");
    }
}

QString CrrcFault::getCurrentFaultTime(unsigned short int index) const
{
    if (index >= this->currentFaultList.size())
    {
        qDebug() << "the index is larger than the current fault list" << __FILE__ << __LINE__;

        return QString("");
    }
    else
    {
        QDateTime dateTime = QDateTime::fromString(this->currentFaultList.at(index).start, QString("yyyy-MM-dd hh:mm:ss"));

        return dateTime.toString("hh:mm:ss");
    }
}

QString CrrcFault::getCurrentFaultCode(unsigned short index) const
{
    if (index >= this->currentFaultList.size())
    {
        qDebug() << "the index is larger than the current fault list, please check it" << __FILE__ << __LINE__;

        return QString("");
    }
    else
    {
        return this->currentFaultList.at(index).code;
    }
}

QString CrrcFault::getCurrentFaultName(unsigned short index) const
{
    if (index >= this->currentFaultList.size())
    {
        qDebug() << "the index is larger than the current fault list, please check it" << __FILE__ << __LINE__;

        return QString("");
    }
    else
    {
        return this->currentFaultList.at(index).name;
    }
}

QString CrrcFault::getCurrentFaultDevice(unsigned short int index) const
{
    if (index >= this->currentFaultList.size())
    {
        qDebug() << "the index is larger than the current fault list, please check it" << __FILE__ << __LINE__;

        return QString("");
    }
    else
    {
        return this->currentFaultList.at(index).device;
    }
}

QString CrrcFault::getCurrentFaultPosition(unsigned short int index) const
{
    if (index >= this->currentFaultList.size())
    {
        qDebug() << "the index is larger than the current fault list, please check it" << __FILE__ << __LINE__;

        return QString("");
    }
    else
    {
        return this->currentFaultList.at(index).position;
    }
}

QString CrrcFault::getCurrentFaultDescription(unsigned short index) const
{
    if (index >= this->currentFaultList.size())
    {
        qDebug() << "the index is larger than the current fault list, please check it" << __FILE__ << __LINE__;

        return QString("");
    }
    else
    {
        return this->currentFaultList.at(index).description;
    }
}

QString CrrcFault::getHistoryFaultStartDate(unsigned short int index) const
{
    if (index >= this->historyFaultList.size())
    {
        qDebug() << "the index is larger than the history fault list, please check it" << __FILE__ << __LINE__;

        return QString("");
    }
    else
    {
        QDateTime dateTime = QDateTime::fromString(this->historyFaultList.at(index).start, QString("yyyy-MM-dd hh:mm:ss"));

        return dateTime.toString("yyyy-MM-dd");
    }
}

QString CrrcFault::getHistoryFaultStartTime(unsigned short int index) const
{
    if (index >= this->historyFaultList.size())
    {
        qDebug() << "the index is larger than the history fault list, please check it" << __FILE__ << __LINE__;

        return QString("");
    }
    else
    {
        QDateTime dateTime = QDateTime::fromString(this->historyFaultList.at(index).start, QString("yyyy-MM-dd hh:mm:ss"));

        return dateTime.toString("hh:mm:ss");
    }
}

QString CrrcFault::getHistoryFaultEndDate(unsigned short int index) const
{
    if (index >= this->historyFaultList.size())
    {
        qDebug() << "the index is larger than the history fault list, please check it" << __FILE__ << __LINE__;

        return QString("");
    }
    else
    {
        QDateTime dateTime = QDateTime::fromString(this->historyFaultList.at(index).end, QString("yyyy-MM-dd hh:mm:ss"));

        return dateTime.toString("yyyy-MM-dd");
    }
}

QString CrrcFault::getHistoryFaultEndTime(unsigned short int index) const
{
    if (index >= this->historyFaultList.size())
    {
        qDebug() << "the index is larger than the history fault list, please check it" << __FILE__ << __LINE__;

        return QString("");
    }
    else
    {
        QDateTime dateTime = QDateTime::fromString(this->historyFaultList.at(index).end, QString("yyyy-MM-dd hh:mm:ss"));

        return dateTime.toString("hh:mm:ss");
    }
}

QString CrrcFault::getHistoryFaultCode(unsigned short int index) const
{
    if (index >= this->historyFaultList.size())
    {
        qDebug() << "the index is larger than the history fault list, please check it" << __FILE__ << __LINE__;

        return QString("");
    }
    else
    {
        return this->historyFaultList.at(index).code;
    }
}

QString CrrcFault::getHistoryFaultName(unsigned short int index) const
{
    if (index >= this->historyFaultList.size())
    {
        qDebug() << "the index is larger than the history fault list, please check it" << __FILE__ << __LINE__;

        return QString("");
    }
    else
    {
        return this->historyFaultList.at(index).name;
    }
}

QString CrrcFault::getHistoryFaultDevice(unsigned short int index) const
{
    if (index >= this->historyFaultList.size())
    {
        qDebug() << "the index is larger than the history fault list, please check it" << __FILE__ << __LINE__;

        return QString("");
    }
    else
    {
        return this->historyFaultList.at(index).device;
    }
}

QString CrrcFault::getHistoryFaultPosition(unsigned short int index) const
{
    if (index >= this->historyFaultList.size())
    {
        qDebug() << "the index is larger than the history fault list, please check it" << __FILE__ << __LINE__;

        return QString("");
    }
    else
    {
        return this->historyFaultList.at(index).position;
    }
}


QString CrrcFault::getHistoryFaultDescription(unsigned short int index) const
{
    if (index >= this->historyFaultList.size())
    {
        qDebug() << "the index is larger than the history fault list, please check it" << __FILE__ << __LINE__;

        return QString("");
    }
    else
    {
        return this->historyFaultList.at(index).description;
    }
}

void CrrcFault::readFaultTypeListFile()
{
    if (false == QFile::exists(this->faultListFilePath))
    {
        qDebug() << "there is no fault list file, please check it, please check it" << __FILE__ << __LINE__;

        return;
    }

    QFile file(faultListFilePath);
    file.open(QIODevice::ReadOnly);
    QTextStream stream(&file);
    int counter = -1;
    unsigned short int key = 0;

    stream.setCodec("GBK");

    while (stream.atEnd() == false)
    {
        QString line = stream.readLine();
        QStringList stringList = line.split("--");
        struct fault_type faultType;

        counter ++;

        // the fault list version
        if (0 == counter && stringList.size() == 2)
        {
            this->faultListFileVersion = stringList.at(1).trimmed();

            qDebug() << "the version of the fault list file is" << this->faultListFileVersion << __FILE__ << __LINE__;

            continue;
        }
        else if (0 == counter)
        {
            qDebug() << "fail to read the version of the fault list file" << __FILE__ << __LINE__;

            continue;
        }

        // line 1 and line 2 are not fault type, so skip them
        if (counter == 0 || counter == 1)
        {
            continue;
        }
        else if (stringList.size() != 9)
        {
            qDebug() << "fail to read the fault list at line" << counter + 1 << ", please check it" << __FILE__ << __LINE__;

            continue;
        }

        faultType.name = stringList.at(0).trimmed();
        faultType.position = stringList.at(1).trimmed();
        faultType.device = stringList.at(2).trimmed();
        faultType.code = stringList.at(3).trimmed();

        unsigned short int portTemp = stringList.at(4).trimmed().toUShort(NULL, 16);

        if (portTemp <= 4095)
        {
            faultType.port = portTemp;
        }
        else
        {
            qDebug() << "invalid port address in line" << counter + 1 << "of the fault list file, please check it" << __FILE__ << __LINE__;

            continue;
        }

        unsigned char byteTemp = stringList.at(5).trimmed().toUShort();

        if (byteTemp < _CRRC_PORT_SIZE)
        {
            faultType.byte = byteTemp;
        }
        else
        {
            qDebug() << "invalid byte address in line " << counter + 1 << "of the fault list file, please check it" << __FILE__ << __LINE__;

            continue;
        }

        unsigned char bitTemp = stringList.at(6).trimmed().toUShort();

        if (bitTemp <= 7)
        {
            faultType.bit = bitTemp;
        }
        else
        {
            qDebug() << "invalid bit address in line " << counter + 1 << "of the fault list file, please check it" << __FILE__ << __LINE__;

            continue;
        }

        unsigned short int virtualValueTemp = stringList.at(7).trimmed().toUShort();

        if (0 == virtualValueTemp)
        {
            faultType.virtualValue = false;
        }
        else if (1 == virtualValueTemp)
        {
            faultType.virtualValue = true;
        }
        else
        {
            qDebug() << "fail to read the the virtual value in line" << counter + 1 << "of the fault list file, please check it" << __FILE__ << __LINE__;

            continue;
        }

        faultType.description = stringList.at(8);

        this->faultList.insert(key, faultType);

        key ++;
    }
}

void CrrcFault::readHistoryFaultFile()
{
    if (QFile::exists(this->historyFilePath))
    {
        QFile file(historyFilePath);
        file.open(QIODevice::ReadOnly);
        QTextStream stream(&file);
        int counter = 0;

        stream.setCodec("GBK");

        while (stream.atEnd() == false)
        {
            QString line = stream.readLine();
            QStringList stringList = line.split("--");

            counter ++;
            if (stringList.size() != 7)
            {
                qDebug() << "fail to read the history record in line" << counter << __FILE__ << __LINE__;

                continue;
            }

            history_fault_type historyFaultType;

            historyFaultType.start = stringList.at(0).trimmed();
            historyFaultType.end = stringList.at(1).trimmed();
            historyFaultType.name = stringList.at(2).trimmed();
            historyFaultType.code = stringList.at(3).trimmed();
            historyFaultType.position = stringList.at(4).trimmed();
            historyFaultType.device = stringList.at(5).trimmed();
            historyFaultType.description = stringList.at(6).trimmed();

            this->historyFaultList.append(historyFaultType);
        }

        file.close();

        qDebug() << "there are" << this->historyFaultList.size() << "record in the history fault list file" << __FILE__ << __LINE__;
    }
    else
    {
        qDebug() << "there is no history fault list file, please check it" << __FILE__ << __LINE__;
    }
}

void CrrcFault::writeHistoryFaultFile() const
{
    QFile file(this->historyFilePath);
    file.open(QIODevice::WriteOnly | QIODevice::Truncate);
    QTextStream stream(&file);

    stream.setCodec("GBK");

    foreach (history_fault_type historyFaultType, this->historyFaultList)
    {
        QString line("");

        line += historyFaultType.start + QString(" -- ");
        line += historyFaultType.end + QString(" -- ");
        line += historyFaultType.name + QString(" -- ");
        line += historyFaultType.code + QString(" -- ");
        line += historyFaultType.position + QString(" -- ");
        line += historyFaultType.device + QString(" -- ");
        line += historyFaultType.description + QString("\n");

        stream << line;
    }

    file.close();
}

bool CrrcFault::checkItemExist(unsigned short key) const
{
    bool value = false;

    foreach (current_fault_type temp, this->currentFaultList)
    {
        if (temp.key == key)
        {
            value = true;

            break;
        }
    }

    return value;
}

void CrrcFault::removeItem(unsigned short int key)
{
    for (int i = 0; i < this->currentFaultList.size(); i ++)
    {
        if (this->currentFaultList.at(i).key == key)
        {
            this->currentFaultList.removeAt(i);

            break;
        }
    }
}

void CrrcFault::printAllFaultType() const
{
    unsigned short int counter = 0;

    foreach (fault_type temp, this->faultList)
    {
        qDebug() << "item" << counter ++ << temp.name << temp.code << QString::number(temp.port, 16)
                    << temp.byte << temp.bit << temp.device << temp.virtualValue << temp.description;
    }
}

unsigned short int CrrcFault::getCurrentFaultListSize() const
{
    return this->currentFaultList.size();
    //return 0;
}

unsigned short int CrrcFault::getHistoryFaultListSize() const
{
    return this->historyFaultList.size();
    //return 0;
}

unsigned short int CrrcFault::getFaultTypeSize() const
{
    return this->faultList.size();
}
QStringList CrrcFault::getStepFaultPosition()
{
    QStringList tmp = m_StepFaultPosition;
    return tmp;
}
QStringList CrrcFault::getStepFaultCode()
{
    QStringList tmp = m_StepFaultCode;
    return tmp;
}
QList<bool> CrrcFault::getStepFaultStatus()
{
    return m_stepFaultStatus;
}
void CrrcFault::ClearStepFault()
{
    m_StepFaultCode.clear();
    m_StepFaultPosition.clear();
    m_stepFaultStatus.clear();
}

void CrrcFault::deleteConfirmFault(unsigned short index)
{

    this->confirmFaultList.removeAt(index);

}
void CrrcFault::deleteAllconfirmFault()
{
    this->confirmFaultList.clear();
}

QString CrrcFault::getConfirmFaultDate(unsigned short int index) const
{
    if (index >= this->confirmFaultList.size())
    {
        qDebug() << "the index is larger than the Confirm fault list" << __FILE__ << __LINE__;

        return QString("");
    }
    else
    {
        QDateTime dateTime = QDateTime::fromString(this->confirmFaultList.at(index).start, QString("yyyy-MM-dd hh:mm:ss"));

        return dateTime.toString("yyyy-MM-dd");
    }
}

QString CrrcFault::getConfirmFaultTime(unsigned short int index) const
{
    if (index >= this->confirmFaultList.size())
    {
        qDebug() << "the index is larger than the Confirm fault list" << __FILE__ << __LINE__;

        return QString("");
    }
    else
    {
        QDateTime dateTime = QDateTime::fromString(this->confirmFaultList.at(index).start, QString("yyyy-MM-dd hh:mm:ss"));

        return dateTime.toString("hh:mm:ss");
    }
}

QString CrrcFault::getConfirmFaultCode(unsigned short index) const
{
    if (index >= this->confirmFaultList.size())
    {
        qDebug() << "the index is larger than the Confirm fault list, please check it" << __FILE__ << __LINE__;

        return QString("");
    }
    else
    {
        return this->confirmFaultList.at(index).code;
    }
}

QString CrrcFault::getConfirmFaultName(unsigned short index) const
{
    if (index >= this->confirmFaultList.size())
    {
        qDebug() << "the index is larger than the Confirm fault list, please check it" << __FILE__ << __LINE__;

        return QString("");
    }
    else
    {
        return this->confirmFaultList.at(index).name;
    }
}

QString CrrcFault::getConfirmFaultDevice(unsigned short int index) const
{
    if (index >= this->confirmFaultList.size())
    {
        qDebug() << "the index is larger than the Confirm fault list, please check it" << __FILE__ << __LINE__;

        return QString("");
    }
    else
    {
        return this->confirmFaultList.at(index).device;
    }
}

QString CrrcFault::getConfirmFaultPosition(unsigned short int index) const
{
    if (index >= this->confirmFaultList.size())
    {
        qDebug() << "the index is larger than the Confirm fault list, please check it" << __FILE__ << __LINE__;

        return QString("");
    }
    else
    {
        return this->confirmFaultList.at(index).position;
    }
}

QString CrrcFault::getConfirmFaultDescription(unsigned short index) const
{
    if (index >= this->confirmFaultList.size())
    {
        qDebug() << "the index is larger than the Confirm fault list, please check it" << __FILE__ << __LINE__;

        return QString("");
    }
    else
    {
        return this->confirmFaultList.at(index).description;
    }
}
unsigned short int CrrcFault::getConfirmFaultListSize() const
{
    return this->confirmFaultList.size();

}
