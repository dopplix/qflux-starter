#include "dispatcher.h"
#include <QDebug>

Dispatcher::Dispatcher(){

}
void Dispatcher::dispatch(QString actionType, QJsonObject payload){
    qDebug()<<"void Dispatcher::dispatch(QString actionType, QJsonObject payload)";
    qDebug()<<"Action Type"<<actionType;
    qDebug()<<"Payload"<<payload;
    if(actionType==ActionTypes::DEFAULT_ACTION){
        //Do Some Processes
        store.setObject(payload);
    }else{

    }
}
