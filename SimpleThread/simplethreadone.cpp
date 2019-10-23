#include "simplethreadone.h"
#include <QDebug>

simplethreadone::simplethreadone()
{

}

void simplethreadone::run()
{
    while (true)
    {
        qDebug()<<QString("%1->%2,thread id:%3").arg(__FUNCTION__).arg(__FILE__).arg((int)QThread::currentThreadId());
        sleep(2);
    }
}
