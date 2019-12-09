#ifndef ADD_H
#define ADD_H

#include <QWidget>

namespace Ui {
class Add;
}

class Add : public QWidget
{
    Q_OBJECT

public:
    explicit Add(QWidget *parent = nullptr);
    void Start_Add();
    void Show_Pid(int pid);
    ~Add();

private:
    Ui::Add *ui;
    QTimer *Add_Timer;
    int num;
    int sum;
    void Display(int num,int sum);

private slots:
    void addSlot();
};

#endif // ADD_H
