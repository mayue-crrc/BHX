#ifndef CRRCCAN_H
#define CRRCCAN_H

#include <QMap>
#include "can4linux.h"
#include <QDebug>
#include <QThread>
#include <QMutex>

struct can_source_port
{
    unsigned short int port;
    unsigned char length;

    can_source_port(unsigned short int port, unsigned char length)
    {
        this->port = port;
        this->length = length;
    }
};

enum port_type
{
    uSinkPort,
    uSourcePort
};

class CrrcCan : public QThread
{
public:
    CrrcCan();
    void run();
    unsigned char getUnsignedChar(unsigned short int port, unsigned char byteOffset);
    signed char getSignedChar(unsigned short port, unsigned char byteOffset);
    unsigned short int getUnsignedInt(unsigned short int port, unsigned char byteOffset);
    signed short int getSignedInt(unsigned short int port, unsigned char byteOffset);
    bool getBool(unsigned short int port, unsigned char byteOffset, unsigned short int bitOffset);
    quint32 getUnsignedInt32(unsigned short int port, unsigned char byteOffset);
    qint32 getSignedInt32(unsigned short int port, unsigned char byteOffset);
    void setBool(unsigned short int port, unsigned char byteOffset, unsigned char bitOffset, bool signal);
    void setUnsignedInt(unsigned short int port, unsigned char byteOffset, unsigned short int signal);
    void setSignedInt(unsigned short int port, unsigned char byteOffset, signed short int signal);
    void setUnsignedChar(unsigned short int port, unsigned char byteOffset, unsigned char signal);
    void setUnsignedInt32(unsigned short int port, unsigned char byteOffset, quint32 signal);
    void setSignedInt32(unsigned short int port, unsigned char byteOffset, qint32 signal);
    void addSourcePort(unsigned short int port, unsigned char length);
    void addSinkPort(unsigned short int port, unsigned char length);
    QList<unsigned short int> getAllPorts();
    QList<unsigned short int> getAllsourcePorts();
    int getCanSize();
    QString getVersion();
    bool getPortState(unsigned short int port);
    void clearAllSourcePort();
    void setCanBaud(unsigned short int baud);
    unsigned short int getCanBaud();
    quint32 getPortRefreshTime(unsigned short int port);

    // add 20161226
    bool getCanportexist(unsigned short int port);

private:
    QMutex mutex;
    int handle, errorCounter;
    unsigned short int baud;
    bool connection;
    QMap<unsigned short int, canmsg_t> data;
    QMap<unsigned short int, unsigned char> sourcePorts;
    QMap<unsigned short int, canmsg_t> receivedata;
    void openCanCard();
    void closeCanCard();
    void synchronize();
    void clearBuffers();
};

#endif // CRRCCAN_H
