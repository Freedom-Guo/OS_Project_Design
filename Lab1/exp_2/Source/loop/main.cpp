#include "loop.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Loop w;
    w.show();
    if(argc>1)
    {
        w.Show_Pid(atoi(argv[1]));
    }
    return a.exec();
}
