#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    qApp->setStyleSheet("QPushButton { background-color: yellow }"
                        "QMainWindow { background-color: blue }");

    w.show();

    return a.exec();
}
