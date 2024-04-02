#ifndef CARSERVICE_H
#define CARSERVICE_H
#include <QObject>
#include <QDebug>
#include<car.h>
#include <QTimer>
class CarService : public QObject
{
    Q_OBJECT
public:
    explicit CarService(QObject *parent = nullptr);
    ~CarService();
    Q_INVOKABLE void start();
    Q_INVOKABLE bool start1(int id,QString name);
    Q_INVOKABLE QString stop1();
    Q_INVOKABLE void accelerate();
    Q_INVOKABLE void deAccelerate();
    Q_INVOKABLE void stop();
    Q_INVOKABLE void addCar(Car myCar);
    Q_INVOKABLE QString getStatus();
signals:
    void statusChanged(int status);
private:
    QTimer *timer;
};

#endif // CARSERVICE_H
