#include "add.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Add w;
    w.show();
    w.Start_Add();
    if(argc>1)
    {
        w.Show_Pid(atoi(argv[1]));
    }
    return a.exec();
}
