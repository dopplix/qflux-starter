#include <QApplication>
#include "mainwidget.h"
#include "dispatcher.h"

Dispatcher* dispatcher;

int main(int argc, char *argv[]){
    QApplication a(argc, argv);
    dispatcher = new Dispatcher;
    MainWidget w;
    dispatcher->connectWidget(&w);
    w.show();
    return a.exec();
}
