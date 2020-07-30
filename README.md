# qflux-starter

Qt project starter using QFlux

# QFlux
https://github.com/dopplix/QFlux

# Screenshot

![starter](https://user-images.githubusercontent.com/31100072/88903280-692d8000-d28e-11ea-9b2b-34c25dfca10c.PNG)

- On Action Button Clicked

```
void Dispatcher::dispatch(QString actionType, QJsonObject payload)
Action Type "DEFAULT_ACTION"
Payload QJsonObject({"TEST_KEY1":"TEST_VALUE1","TEST_KEY2":"TEST_VALUE2"})
void MainWidget::onStoreChanged(QJsonObject diffObj)
Diff Object QJsonObject({"TEST_KEY1":"TEST_VALUE1"})
"TEST_KEY1" QJsonValue(string, "TEST_VALUE1")
void MainWidget::onStoreChanged(QJsonObject diffObj)
Diff Object QJsonObject({"TEST_KEY2":"TEST_VALUE2"})
"TEST_KEY2" QJsonValue(string, "TEST_VALUE2")
```

- On State Button Clicked after Action
```
State QJsonObject({"TEST_KEY1":"TEST_VALUE1","TEST_KEY2":"TEST_VALUE2"})
```

# Install

```
git clone https://github.com/dopplix/qflux-starter.git
cd qflux-starter
git clone https://github.com/dopplix/QFlux.git qflux
cd qflux
git clone https://github.com/dopplix/QJsonObjectMutex.git store
```
