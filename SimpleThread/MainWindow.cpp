#include "MainWindow.h"
#include "ui_MainWindow.h"
#include "simplethreadone.h"
#include "simplethreadtwo.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
      , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    simplethreadone *threadone = new simplethreadone();
    threadone->start();

    QThread *thread = new QThread();
    simplethreadtwo *threadtwo = new simplethreadtwo();
    threadtwo->moveToThread(thread);
    connect(this, SIGNAL(Signal()), threadtwo, SLOT(doSomething()));
    thread->start();
    SendStart();
    qDebug()<<QString("%1->%2,thread id:%3").arg(__FUNCTION__).arg(__FILE__).arg((int)QThread::currentThreadId());
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::SendStart()
{
    emit Signal();
}

