#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.setWindowTitle("QProxy");
    w.setFixedSize(376, 652);
    w.show();
    return a.exec();
}
