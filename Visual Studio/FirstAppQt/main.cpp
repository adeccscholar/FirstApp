#include "MainFormQt.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    frmMainQt w;
    w.show();
    return a.exec();
}
