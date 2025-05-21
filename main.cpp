#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;//Create object from class mainwindow
    w.show();//Show the window from the MainWindow object
    return a.exec();
}
