#include "simplethreadtwo.h"
#include <QDebug>
#include <qthread.h>

simplethreadtwo::simplethreadtwo(QObject *parent) : QObject(parent)
{

}

void simplethreadtwo::doSomething()
{
    while (true)
    {
        qDebug()<<QString("%1->%2,thread id:%3").arg(__FUNCTION__).arg(__FILE__).arg((int)QThread::currentThreadId());
        QThread::sleep(2);
    }
}
