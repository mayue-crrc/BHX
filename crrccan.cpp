#include "crrccan.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/ioctl.h>
#include <fcntl.h>
#include <unistd.h>
#include <QDebug>
#include <QDateTime>

#define _CAN_MAX_MESSAGE 300
// #define _CAN_STATE_PRINT
#define _CRRC_CAN_VERSION 2.7
#define _CAN_RECONNECT_COUNTER 60
#define _CAN_DEFAULT_BAUD_RATE 250
#define _CAN_SYNCHRONIZE_CYCLE 100

CrrcCan::CrrcCan()
{
    this->errorCounter = 0;

    this->setCanBaud(_CAN_DEFAULT_BAUD_RATE);
    this->openCanCard();
}

void CrrcCan::openCanCard()
{
    handle = open("/dev/can0", O_RDWR | O_NONBLOCK);

    if (handle >= 0)
    {
        this->connection = true;
        qDebug() << "connect to the can board card successfully, the baud rate is" << this->baud << __FILE__ << __LINE__;
    }
    else
    {
        this->connection = false;
        qDebug() << "fail to connect to the can board card, please check it" << __FILE__ << __LINE__;
    }
}

void CrrcCan::closeCanCard()
{    
    close(handle);
    this->connection = false;

    qDebug() << "the connection with the can board card has been released" << __FILE__ << __LINE__;
}

void CrrcCan::clearBuffers()
{
    volatile struct Command_par command;

    command.cmd = CMD_CLEARBUFFERS;
    ioctl(this->handle, CAN_IOCTL_COMMAND, &command);
}

void CrrcCan::run()
{
    while (true)
    {
#ifdef _CAN_STATE_PRINT
        qDebug() << "the thread of crrccan starts at" << QDateTime::currentDateTime().toString("hh:mm:ss:z");
#endif
        this->synchronize();

#ifdef _CAN_STATE_PRINT
        qDebug() << "the thread of crrccan ends at" << QDateTime::currentDateTime().toString("hh:mm:ss:z");
#endif
        this->msleep(_CAN_SYNCHRONIZE_CYCLE);
    }
}

void CrrcCan::synchronize()
{
    canmsg_t pointer[_CAN_MAX_MESSAGE];
    int counter = read(handle, pointer, _CAN_MAX_MESSAGE);

#ifdef _CAN_STATE_PRINT
    qDebug() << "there are" << counter << "message got" << __FILE__ << __LINE__;
#endif

    this->mutex.lock();

    if (counter >= _CAN_MAX_MESSAGE)
    {
        qDebug() << "ths message size received in 100ms is larger than" << _CAN_MAX_MESSAGE
                        << "or equal to it, please check it";

        this->clearBuffers();
    }

    if (this->errorCounter >= 20)
    {
        this->closeCanCard();
        this->openCanCard();

        this->errorCounter = 0;
    }
    else if (counter <= 0)
    {
        this->errorCounter ++;
    }

    for (int i = 0; i < counter; i ++)
    {
        if (this->data.contains(pointer[i].id) == true)
        {
            this->data[pointer[i].id] = pointer[i];
        }
        else
        {
            // abandon the port if it is not added in the sink port list
            // this->data.insert(pointer[i].id, pointer[i]);
        }
    }

    int index = 0;

    foreach (unsigned short int port, this->sourcePorts.keys())
    {
        pointer[index] = this->data[port];

        if (index < _CAN_MAX_MESSAGE)
        {
            index ++;
        }
    }

    static unsigned char writeCounter = 0;

    if (writeCounter >= 2)
    {
        writeCounter = 0;
        write(handle, pointer, this->sourcePorts.size());
    }
    else
    {
        writeCounter ++;
    }

    this->mutex.unlock();
}

unsigned char CrrcCan::getUnsignedChar(unsigned short port, unsigned char byteOffset)
{
    this->mutex.lock();

    if (this->data.contains(port) == false)
    {
        qDebug() << "no port" << port << "in the list" << __FILE__ << __LINE__;

        this->mutex.unlock();
        return 0;
    }
    else if (byteOffset > 7)
    {
        qDebug() << "the byte offset is larger than 7" << __FILE__ << __LINE__;

        this->mutex.unlock();
        return 0;
    }

    unsigned char value = this->data[port].data[byteOffset];

    this->mutex.unlock();
    return value;
}

signed char CrrcCan::getSignedChar(unsigned short port, unsigned char byteOffset)
{
    this->mutex.lock();

    if (this->data.contains(port) == false)
    {
        qDebug() << "no port" << port << "in the list" << __FILE__ << __LINE__;

        this->mutex.unlock();
        return 0;
    }
    else if (byteOffset > 7)
    {
        qDebug() << "the byte offset is larger than 7" << __FILE__ << __LINE__;

        this->mutex.unlock();
        return 0;
    }

    signed char value = (signed char)this->data[port].data[byteOffset];

    this->mutex.unlock();
    return value;
}

unsigned short int CrrcCan::getUnsignedInt(unsigned short int port, unsigned char byteOffset)
{
    this->mutex.lock();

    if (this->data.contains(port) == false)
    {
        qDebug() << "no port" << port << "in the list" << __FILE__ << __LINE__;

        this->mutex.unlock();
        return 0;
    }
    else if (byteOffset > 6)
    {
        qDebug() << "the byte offset is larger than 6" << __FILE__ << __LINE__;

        this->mutex.unlock();
        return 0;
    }

    void *pointer = this->data[port].data + byteOffset;
    unsigned short int value = *(unsigned short int *)pointer;

    this->mutex.unlock();
    return value;
}

quint32 CrrcCan::getUnsignedInt32(unsigned short int port, unsigned char byteOffset)
{
    this->mutex.lock();

    if (this->data.contains(port) == false)
    {
        qDebug() << "no port" << port << "in the list" << __FILE__ << __LINE__;

        this->mutex.unlock();
        return 0;
    }
    else if (byteOffset > 4)
    {
        qDebug() << "the byte offset is larger than 4" << __FILE__ << __LINE__;

        this->mutex.unlock();
        return 0;
    }

    void *pointer = this->data[port].data + byteOffset;
    quint32 value = *(quint32 *)pointer;

    this->mutex.unlock();
    return value;
}

signed short int CrrcCan::getSignedInt(unsigned short int port, unsigned char byteOffset)
{
    this->mutex.lock();

    if (this->data.contains(port) == false)
    {
        qDebug() << "no port" << port << "in the list" << __FILE__ << __LINE__;

        this->mutex.unlock();
        return 0;
    }
    else if (byteOffset > 6)
    {
        qDebug() << "the byte offset is larger than 6" << __FILE__ << __LINE__;

        this->mutex.unlock();
        return 0;
    }

    void *pointer = this->data[port].data + byteOffset;
    signed short int value = *(signed short int *)pointer;

    this->mutex.unlock();
    return value;
}

qint32 CrrcCan::getSignedInt32(unsigned short int port, unsigned char byteOffset)
{
    this->mutex.lock();

    if (this->data.contains(port) == false)
    {
        qDebug() << "no port" << port << "in the list" << __FILE__ << __LINE__;

        this->mutex.unlock();
        return 0;
    }
    else if (byteOffset > 4)
    {
        qDebug() << "the byte offset is larger than 4" << __FILE__ << __LINE__;

        this->mutex.unlock();
        return 0;
    }

    void *pointer = this->data[port].data + byteOffset;
    qint32 value = *(qint32 *)pointer;

    this->mutex.unlock();
    return value;
}

bool CrrcCan::getBool(unsigned short int port, unsigned char byteOffset, unsigned short int bitOffset)
{
    this->mutex.lock();

    if (this->data.contains(port) == false)
    {
        qDebug() << "no port" << port << "in the list" << __FILE__ << __LINE__;

        this->mutex.unlock();
        return false;
    }
    else if (byteOffset > 7)
    {
        qDebug() << "the byte offset is larger than 7" << __FILE__ << __LINE__;

        this->mutex.unlock();
        return false;
    }
    else if (bitOffset > 7)
    {
        qDebug() << "the bit offset is larger than 7" << __FILE__ << __LINE__;

        this->mutex.unlock();
        return false;
    }

    unsigned char value = this->data[port].data[byteOffset] & (0x01 << bitOffset);

    if (0 == value)
    {
        this->mutex.unlock();
        return false;
    }
    else
    {
        this->mutex.unlock();
        return true;
    }
}

void CrrcCan::setBool(unsigned short int port, unsigned char byteOffset, unsigned char bitOffset, bool signal)
{
    this->mutex.lock();

    if (this->sourcePorts.contains(port) == false)
    {
#ifdef _CAN_STATE_PRINT
        qDebug() << "the port is not a source port, please check it" << __FILE__ << __LINE__;
#endif

    }

    if (this->data.contains(port) == false)
    {
        qDebug() << "no port" << port << "in the list" << __FILE__ << __LINE__;

        this->mutex.unlock();
        return;
    }
    else if (byteOffset > 7)
    {
        qDebug() << "the byte offset is larger than 7" << __FILE__ << __LINE__;

        this->mutex.unlock();
        return;
    }
    else if (bitOffset > 7)
    {
        qDebug() << "the bit offset is larger than 7" << __FILE__ << __LINE__;

        this->mutex.unlock();
        return;
    }

    if (signal)
    {
        this->data[port].data[byteOffset] |= (0x01 << bitOffset);
    }
    else
    {
        this->data[port].data[byteOffset] &= (~(0x01 << bitOffset));
    }

    this->mutex.unlock();
}

void CrrcCan::setUnsignedChar(unsigned short port, unsigned char byteOffset, unsigned char signal)
{
    this->mutex.lock();

    if (this->sourcePorts.contains(port) == false)
    {
#ifdef _CAN_STATE_PRINT
        qDebug() << "the port is not a source port, please check it" << __FILE__ << __LINE__;
#endif
    }

    if (this->data.contains(port) == false)
    {
        qDebug() << "no port" << port << "in the list" << __FILE__ << __LINE__;

        this->mutex.unlock();
        return;
    }
    else if (byteOffset > 7)
    {
        qDebug() << "the byte offset is larger than 7" << __FILE__ << __LINE__;

        this->mutex.unlock();
        return;
    }

    this->data[port].data[byteOffset] = signal;
    this->mutex.unlock();
}

void CrrcCan::setUnsignedInt(unsigned short int port, unsigned char byteOffset, unsigned short int signal)
{
    this->mutex.lock();

    if (this->sourcePorts.contains(port) == false)
    {
#ifdef _CAN_STATE_PRINT
        qDebug() << "the port is not a source port, please check it" << __FILE__ << __LINE__;
#endif
    }

    if (this->data.contains(port) == false)
    {
        qDebug() << "no port" << port << "in the list" << __FILE__ << __LINE__;

        this->mutex.unlock();
        return;
    }
    else if (byteOffset > 6)
    {
        qDebug() << "the byte offset is larger than 6" << __FILE__ << __LINE__;

        this->mutex.unlock();
        return;
    }

    void *pointer = this->data[port].data + byteOffset;

    *(unsigned short int *)pointer = signal;
    this->mutex.unlock();
}

void CrrcCan::setSignedInt(unsigned short int port, unsigned char byteOffset, signed short int signal)
{
    this->mutex.lock();

    if (this->sourcePorts.contains(port) == false)
    {
#ifdef _CAN_STATE_PRINT
        qDebug() << "the port is not a source port, please check it" << __FILE__ << __LINE__;
#endif
    }

    if (this->data.contains(port) == false)
    {
        qDebug() << "no port" << port << "in the list" << __FILE__ << __LINE__;

        this->mutex.unlock();
        return;
    }
    else if (byteOffset > 6)
    {
        qDebug() << "the byte offset is larger than 6" << __FILE__ << __LINE__;

        this->mutex.unlock();
        return;
    }

    void *pointer = this->data[port].data + byteOffset;

    *(signed short int *)pointer = signal;
    this->mutex.unlock();
}

void CrrcCan::setUnsignedInt32(unsigned short int port, unsigned char byteOffset, quint32 signal)
{
    this->mutex.lock();

    if (this->sourcePorts.contains(port) == false)
    {
#ifdef _CAN_STATE_PRINT
        qDebug() << "the port is not a source port, please check it" << __FILE__ << __LINE__;
#endif
    }

    if (this->data.contains(port) == false)
    {
        qDebug() << "no port" << port << "in the list" << __FILE__ << __LINE__;

        this->mutex.unlock();
        return;
    }
    else if (byteOffset > 4)
    {
        qDebug() << "the byte offset is larger than 4" << __FILE__ << __LINE__;

        this->mutex.unlock();
        return;
    }

    void *pointer = this->data[port].data + byteOffset;

    *(quint32 *)pointer = signal;
    this->mutex.unlock();
}

void CrrcCan::setSignedInt32(unsigned short int port, unsigned char byteOffset, qint32 signal)
{
    this->mutex.lock();

    if (this->sourcePorts.contains(port) == false)
    {
#ifdef _CAN_STATE_PRINT
        qDebug() << "the port is not a source port, please check it" << __FILE__ << __LINE__;
#endif
    }

    if (this->data.contains(port) == false)
    {
        qDebug() << "no port" << port << "in the list" << __FILE__ << __LINE__;

        this->mutex.unlock();
        return;
    }
    else if (byteOffset > 4)
    {
        qDebug() << "the byte offset is larger than 4" << __FILE__ << __LINE__;

        this->mutex.unlock();
        return;
    }

    void *pointer = this->data[port].data + byteOffset;

    *(qint32 *)pointer = signal;
    this->mutex.unlock();
}

void CrrcCan::addSourcePort(unsigned short int port, unsigned char length)
{
    if (this->isRunning())
    {
        qDebug() << "please stop the crrc can thread before add port";

        return;
    }

    if (this->sourcePorts.contains(port))
    {
        qDebug() << "the source port has already been in the port list, please check it" << __FILE__ << __LINE__;
    }
    else
    {
        canmsg_t message;

        message.id = port;
        message.length = length;
        message.data[0] = 0;
        message.data[1] = 0;
        message.data[2] = 0;
        message.data[3] = 0;
        message.data[4] = 0;
        message.data[5] = 0;
        message.data[6] = 0;
        message.data[7] = 0;

        this->sourcePorts.insert(port, length);

        if (this->data.contains(port))
        {
            qDebug() << "the port has already been in the port list, please check it" << __FILE__ << __LINE__;
        }
        else
        {
            this->data.insert(port, message);
        }
    }
}

void CrrcCan::addSinkPort(unsigned short port, unsigned char length)
{
    if (this->isRunning())
    {
        qDebug() << "please stop the crrc can thread before add port";

        return;
    }

    if (this->data.contains(port))
    {
        qDebug() << "the port has already been in the port list, please check it" << __FILE__ << __LINE__;
    }
    else
    {
        canmsg_t message;

        message.id = port;
        message.length = length;
        message.data[0] = 0;
        message.data[1] = 0;
        message.data[2] = 0;
        message.data[3] = 0;
        message.data[4] = 0;
        message.data[5] = 0;
        message.data[6] = 0;
        message.data[7] = 0;
        message.timestamp.tv_sec = time(NULL);
        message.timestamp.tv_usec = 0;

        this->data.insert(port, message);
    }
}

QList<unsigned short int> CrrcCan::getAllPorts()
{
    this->mutex.lock();
    receivedata = data;

    foreach (unsigned short int port, this->sourcePorts.keys())
    {
        if (receivedata.contains(port))
        {
            receivedata.remove(port);
        }
    }

    this->mutex.unlock();
    return this->receivedata.keys();
}

QList<unsigned short int>  CrrcCan::getAllsourcePorts()
{
    this->mutex.lock();

    QList<unsigned short int> value = this->sourcePorts.keys();

    this->mutex.unlock();
    return value;
}

int CrrcCan::getCanSize()
{
    this->mutex.lock();

    int value = this->data.size();

    this->mutex.unlock();
    return value;
}

QString CrrcCan::getVersion()
{
    QString text;

    return text.sprintf("%.1f", _CRRC_CAN_VERSION);
}

bool CrrcCan::getPortState(unsigned short port)
{
    this->mutex.lock();

    if (this->sourcePorts.contains(port))
    {
        this->mutex.unlock();
        return true;
    }
    else if (this->data.contains(port))
    {
        if (time(NULL) - this->data[port].timestamp.tv_sec > 2)
        {
            this->mutex.unlock();
            return false;
        }
        else
        {
            this->mutex.unlock();
            return true;
        }
    }
    else
    {
        qDebug() << "fail to get port refresh state for the port is neither in the source port list nor in the sink port list" << __FILE__ << __LINE__;

        this->mutex.unlock();
        return false;
    }
}

// the unit of the port refresh time is second
quint32 CrrcCan::getPortRefreshTime(unsigned short int port)
{
    this->mutex.lock();

    quint32 value = 0;

    if (this->sourcePorts.contains(port))
    {
        value = 0;
    }
    else if (this->data.contains(port))
    {
        value = time(NULL) - this->data[port].timestamp.tv_sec;
    }
    else
    {
        qDebug() << "fail to get the refresh time of port" << QString::number(port, 16)
                    << "for it is neither in the source port list nor in the sink port list" << __FILE__ << __LINE__;

        value = 65535;
    }

    if (value > 65535)
    {
        value = 65535;
    }

    this->mutex.unlock();

    return value;
}

void CrrcCan::clearAllSourcePort()
{
    //this->mutex.lock();

    foreach (unsigned short int port,this->sourcePorts)
    {
        this->setUnsignedChar(port, 0, 0);
        this->setUnsignedChar(port, 1, 0);
        this->setUnsignedChar(port, 2, 0);
        this->setUnsignedChar(port, 3, 0);
        this->setUnsignedChar(port, 4, 0);
        this->setUnsignedChar(port, 5, 0);
        this->setUnsignedChar(port, 6, 0);
        this->setUnsignedChar(port, 7, 0);
    }

    //this->mutex.unlock();
}

// the unit of the can baud is k(1000), which means that 250 is 250k
void CrrcCan::setCanBaud(unsigned short baud)
{
    this->baud = baud;

    QString command;

    command.sprintf("/sbin/sysctl -w dev.Can.Baud='%d 0 0 0'", this->baud);

    const char *pointer = command.toAscii().data();

    system(pointer);
}

// the unit of the can baud is k(1000), which means that 250 is 250k
unsigned short int CrrcCan::getCanBaud()
{
    return baud;
}
// add 20161226 get if port exists
bool CrrcCan::getCanportexist(unsigned short port)
{
    if(this->data.contains(port))
    {
        return true;
    }else
    {
        return false;
    }
}
