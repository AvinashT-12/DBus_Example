/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp -c CarInterface -i Car.h -p CarInterface.h:CarInterface.cpp car.xml
 *
 * qdbusxml2cpp is Copyright (C) 2020 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#ifndef CARINTERFACE_H
#define CARINTERFACE_H

#include <QtCore/QObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>
#include <QtDBus/QtDBus>
#include "../CarService/car.h"

/*
 * Proxy class for interface com.pthinks.car.engine
 */
class CarInterface: public QDBusAbstractInterface
{
    Q_OBJECT
public:
    static inline const char *staticInterfaceName()
    { return "com.pthinks.car.engine"; }

public:
    CarInterface(const QString &service, const QString &path, const QDBusConnection &connection, QObject *parent = nullptr);

    ~CarInterface();

public Q_SLOTS: // METHODS
    inline QDBusPendingReply<> accelerate()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("accelerate"), argumentList);
    }

    inline QDBusPendingReply<> addCar(Car myCar)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(myCar);
        return asyncCallWithArgumentList(QStringLiteral("addCar"), argumentList);
    }

    inline QDBusPendingReply<> deAccelerate()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("deAccelerate"), argumentList);
    }

    inline QDBusPendingReply<QString> getStatus()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("getStatus"), argumentList);
    }

    inline QDBusPendingReply<> start()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("start"), argumentList);
    }

    inline QDBusPendingReply<bool> start1(int name, const QString &value)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(name) << QVariant::fromValue(value);
        return asyncCallWithArgumentList(QStringLiteral("start1"), argumentList);
    }

    inline QDBusPendingReply<> stop()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("stop"), argumentList);
    }

    inline QDBusPendingReply<QString> stop1()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("stop1"), argumentList);
    }

Q_SIGNALS: // SIGNALS
    void statusChanged(int status);
};

namespace com {
  namespace pthinks {
    namespace car {
      typedef ::CarInterface engine;
    }
  }
}
#endif
