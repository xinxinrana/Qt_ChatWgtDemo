#include "mainwindow.h"
#include "mainwindow_test.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow_Test w;
    w.show();
    return a.exec();
}
