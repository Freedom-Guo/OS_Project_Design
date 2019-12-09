#include "show.h"
#include "ui_show.h"
#include "QTimer"
#include "qdatetime.h"

Show::Show(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Show)
{
    ui->setupUi(this);
    QTimer *timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(Time_Update()));
    timer->start(1000);
}

Show::~Show()
{
    delete ui;
}

void Show::Time_Update()
{
    QDateTime time = QDateTime::currentDateTime();
    QString str = time.toString("yyyy-MM-dd hh:mm:ss dddd");
    ui->label_2->setText(str);
}

void Show::Show_Pid(int pid)
{
    ui->label_4->setText(QString::number(pid));
}
