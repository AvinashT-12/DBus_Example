#include "CarService.h"

CarService::CarService(QObject *parent)
    : QObject{parent}
{
    qDebug()<<Q_FUNC_INFO<<"Constructor";
    timer=new QTimer;
}

CarService::~CarService()
{
    qDebug()<<Q_FUNC_INFO<<"Destructor";
}

void CarService::start()
{
    qDebug()<<Q_FUNC_INFO<<"Car Start Function ";
}

bool CarService::start1(int id, QString name)
{
    qDebug()<<Q_FUNC_INFO<<"Car Start1 Function -parameterized";
    qDebug()<<"name is "<<name<<" and id is "<<id;
    return true;
}

QString CarService::stop1()
{
    qDebug()<<Q_FUNC_INFO<<"Car Stop1  Function -parameterized";

    return "stop1 function";
}

void CarService::accelerate()
{
    qDebug()<<Q_FUNC_INFO<<"Car Accelerate Function ";
}

void CarService::deAccelerate()
{
    qDebug()<<Q_FUNC_INFO<<"Car De-Accelerate Function ";
}

void CarService::stop()
{
    qDebug()<<Q_FUNC_INFO<<"Car Stop Function ";
}

void CarService::addCar(Car car)
{
    qDebug()<<Q_FUNC_INFO<<"Car object function -add car";
    qDebug()<<"Car's id "<<car.id();
    qDebug()<<"Car's name "<<car.name();

}

QString CarService::getStatus()
{
    qDebug()<<Q_FUNC_INFO<<"get status function";
    QString var="Start";
    return var;
}
