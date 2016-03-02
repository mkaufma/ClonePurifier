#include "clonepurifiermain.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ClonePurifierMain w;
    w.show();

    return a.exec();
}
