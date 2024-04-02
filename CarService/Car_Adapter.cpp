/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp -c CarAdapter -i car.h -a Car_Adapter.h:Car_Adapter.cpp car.xml
 *
 * qdbusxml2cpp is Copyright (C) 2020 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#include "Car_Adapter.h"
#include <QtCore/QMetaObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>

/*
 * Implementation of adaptor class CarAdapter
 */

CarAdapter::CarAdapter(QObject *parent)
    : QDBusAbstractAdaptor(parent)
{
    // constructor
    setAutoRelaySignals(true);
}

CarAdapter::~CarAdapter()
{
    // destructor
}

void CarAdapter::accelerate()
{
    // handle method call com.pthinks.car.engine.accelerate
    QMetaObject::invokeMethod(parent(), "accelerate");
}

void CarAdapter::addCar(Car myCar)
{
    // handle method call com.pthinks.car.engine.addCar
    QMetaObject::invokeMethod(parent(), "addCar", Q_ARG(Car, myCar));
}

void CarAdapter::deAccelerate()
{
    // handle method call com.pthinks.car.engine.deAccelerate
    QMetaObject::invokeMethod(parent(), "deAccelerate");
}

QString CarAdapter::getStatus()
{
    // handle method call com.pthinks.car.engine.getStatus
    QString out0;
    QMetaObject::invokeMethod(parent(), "getStatus", Q_RETURN_ARG(QString, out0));
    return out0;
}

void CarAdapter::start()
{
    // handle method call com.pthinks.car.engine.start
    QMetaObject::invokeMethod(parent(), "start");
}

bool CarAdapter::start1(int name, const QString &value)
{
    // handle method call com.pthinks.car.engine.start1
    bool out0;
    QMetaObject::invokeMethod(parent(), "start1", Q_RETURN_ARG(bool, out0), Q_ARG(int, name), Q_ARG(QString, value));
    return out0;
}

void CarAdapter::stop()
{
    // handle method call com.pthinks.car.engine.stop
    QMetaObject::invokeMethod(parent(), "stop");
}

QString CarAdapter::stop1()
{
    // handle method call com.pthinks.car.engine.stop1
    QString out0;
    QMetaObject::invokeMethod(parent(), "stop1", Q_RETURN_ARG(QString, out0));
    return out0;
}

