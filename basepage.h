#ifndef BASEPAGE_H
#define BASEPAGE_H

#include <QWidget>
#include <global.h>
#include "database.h"

class BasePage : public QWidget
{
    Q_OBJECT
public:
    explicit BasePage(QWidget *parent = 0);
    void setMyBase(enum pagePosition position, QString name);
    virtual void updatePage();
    virtual void showEvent(QShowEvent *);

public:
    static int currentPage;
    static Database *database;
    QString name;

public slots:
signals:
    void changePage(int);
};

#endif // BASEPAGE_H
