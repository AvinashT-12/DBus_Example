#include "viewmodel.h"

ViewModel::ViewModel(QObject *parent)
    : QObject{parent}
{
    qDebug()<<Q_FUNC_INFO;
    auto conn=QDBusConnection::sessionBus();
    Car::registerMetaType();
    carEngine=new CarInterface("com.pthinks.car.engine","/Engine",conn,0);
    carEngine->start();
    carEngine->stop();
    carEngine->accelerate();
    carEngine->deAccelerate();
    carEngine->start1(21,"Pradeep");
    carEngine->stop1();
    Car carObject;
    carObject.setId("124");
    carObject.setName("Benz");
    carEngine->addCar(carObject);
    m_status=carEngine->getStatus();
   // carEngine->getStatus();
}

ViewModel::~ViewModel()
{
    qDebug()<<Q_FUNC_INFO;

}

CarInterface *ViewModel::getCarEngine() const
{
     return carEngine;
}

void ViewModel::setCarEngine(CarInterface *newCarEngine)
{
    if (carEngine == newCarEngine)
        return;
    carEngine = newCarEngine;
    emit carEngineChanged();
}

QString ViewModel::status() const
{
    return m_status;
}

void ViewModel::setStatus(const QString &newStatus)
{
    if (m_status == newStatus)
        return;
    m_status = newStatus;
    emit statusChanged();
}
