#ifndef SIMPLETHREADTWO_H
#define SIMPLETHREADTWO_H

#include <QObject>

class simplethreadtwo : public QObject
{
    Q_OBJECT
public:
    explicit simplethreadtwo(QObject *parent = nullptr);


signals:

public slots:
    void doSomething();
};

#endif // SIMPLETHREADTWO_H
