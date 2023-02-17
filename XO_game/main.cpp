#include "XOmanage.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    XOmanage w;
    w.show();
    return a.exec();
}
