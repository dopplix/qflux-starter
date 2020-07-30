#include "mainwidget.h"
#include <QJsonObject>
#include <QDebug>
#include <QVBoxLayout>
#include <QPushButton>

//MainWidget::MainWidget(QWidget *parent) : QWidget(parent){
MainWidget::MainWidget(QWidget *parent) : ConnectedWidget(parent){
    QVBoxLayout* layout = new QVBoxLayout;
    QPushButton* actionPush = new QPushButton("Action");
    QPushButton* statePush = new QPushButton("State");
    this->setLayout(layout);
    layout->addWidget(actionPush);
    layout->addWidget(statePush);
    connect(actionPush,&QPushButton::clicked,[=]{
        QJsonObject payload;
        payload.insert("TEST_KEY1","TEST_VALUE1");
        payload.insert("TEST_KEY2","TEST_VALUE2");
        emit(action(ActionTypes::DEFAULT_ACTION,payload));
    });
    connect(statePush,&QPushButton::clicked,[=]{
        qDebug()<<"State"<<getState();
    });
}
MainWidget::~MainWidget(){

}
void MainWidget::onStoreChanged(QJsonObject diffObj){
    qDebug()<<"void MainWidget::onStoreChanged(QJsonObject diffObj)"<<diffObj;
    QString key = diffObj.keys().at(0);
    QJsonValue value = diffObj.value(key);
    qDebug()<<key<<value;
    if(key=="TEST_KEY"){
        //Update Some Views
    }else{

    }
}
