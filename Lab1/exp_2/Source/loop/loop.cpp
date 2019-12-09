#include "loop.h"
#include "ui_loop.h"
#include "QTimer"
#include "qdatetime.h"

Loop::Loop(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Loop)
{
    num = 0;
    QTimer *timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(Number_Update()));
    timer->start(1000);
    ui->setupUi(this);
}

Loop::~Loop()
{
    delete ui;
}

void Loop::Show_Pid(int pid)
{
    ui->label_2->setText(QString::number(pid));
}

void Loop::Number_Update()
{
    if(num>9)
    {
        num = 0;
        QString str = QString::number(num);
        ui->label_3->setText(str);
        ++num;
    }
    else
    {
        QString str = QString::number(num);
        ui->label_3->setText(str);
        ++num;
    }
}
