#include "mainwindow.h"
#include <QApplication>
#include "clienttest.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    ClientTest cl;
    cl.Connect();

    return a.exec();
}
