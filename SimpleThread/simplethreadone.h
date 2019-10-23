#ifndef SIMPLETHREADONE_H
#define SIMPLETHREADONE_H

#include <QThread>

class simplethreadone : public QThread
{
public:
    simplethreadone();
protected:
    void run() override;
};

#endif // SIMPLETHREADONE_H
