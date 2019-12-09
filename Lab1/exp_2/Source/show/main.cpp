#include "show.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Show w;
    w.show();
    if(argc>1)
    {
        w.Show_Pid(atoi(argv[1]));
    }
    return a.exec();
}
