#ifndef LOOP_H
#define LOOP_H

#include <QWidget>

namespace Ui {
class Loop;
}

class Loop : public QWidget
{
    Q_OBJECT

public:
    explicit Loop(QWidget *parent = nullptr);
    void Show_Pid(int pid);
    ~Loop();

private:
    Ui::Loop *ui;
    int num;

private slots:
    void Number_Update();
};

#endif // LOOP_H
