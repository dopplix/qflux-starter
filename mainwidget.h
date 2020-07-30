#ifndef MAINWIDGET_H
#define MAINWIDGET_H

#include <QWidget>
#include "qflux/connectedwidget.h"
#include "actionTypes.h"

//class MainWidget : public QWidget{
class MainWidget : public ConnectedWidget{
    Q_OBJECT

public:
    MainWidget(QWidget *parent = nullptr);
    ~MainWidget() override;

public slots:
    void onStoreChanged(QJsonObject diffObj) override;

};
#endif // MAINWIDGET_H
