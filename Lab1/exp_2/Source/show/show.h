#ifndef SHOW_H
#define SHOW_H

#include <QWidget>

namespace Ui {
class Show;
}

class Show : public QWidget
{
    Q_OBJECT

public:
    explicit Show(QWidget *parent = nullptr);
    ~Show();
    void Show_Pid(int pid);

private:
    Ui::Show *ui;

private slots:
    void Time_Update();
};

#endif // SHOW_H
