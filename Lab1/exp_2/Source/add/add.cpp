#include "add.h"
#include "ui_add.h"
#include "qtimer.h"

Add::Add(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Add)
{
    ui->setupUi(this);
    num = 0;
    sum = 0;
    Add_Timer = new QTimer;
    connect(Add_Timer,SIGNAL(timeout()),this,SLOT(addSlot()));
}

Add::~Add()
{
    delete ui;
}

void Add::addSlot()
{
    num += 1;
    sum += num;
    if(num > 1000)
    {
        num = 1;
        sum = 1;
    }
    Display(num,sum);
}

void Add::Display(int num,int sum)
{
    ui->textEdit->append(QString::number(sum-num)+"+"+QString::number(num)+"=");
    ui->textEdit_2->append(QString::number(sum));
    if(num>=1000)
    {
        ui->textEdit->clear();
        ui->textEdit_2->clear();
    }
}

void Add::Start_Add()
{
    Add_Timer->start(1000);
}

void Add::Show_Pid(int pid)
{
    ui->label_4->setText(QString::number(pid));
}
