#include "mainwindow.h"
#include <QApplication>
#include <QSize>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QSize s;
    s.setHeight(300);
    s.setWidth(400);

    MainWindow w;
    w.show();
    w.setFixedSize(s);


    return a.exec();
}
