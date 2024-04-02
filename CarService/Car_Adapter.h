/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp -c CarAdapter -i car.h -a Car_Adapter.h:Car_Adapter.cpp car.xml
 *
 * qdbusxml2cpp is Copyright (C) 2020 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * This file may have been hand-edited. Look for HAND-EDIT comments
 * before re-generating it.
 */

#ifndef CAR_ADAPTER_H
#define CAR_ADAPTER_H

#include <QtCore/QObject>
#include <QtDBus/QtDBus>
#include "car.h"
QT_BEGIN_NAMESPACE
class QByteArray;
template<class T> class QList;
template<class Key, class Value> class QMap;
class QString;
class QStringList;
class QVariant;
QT_END_NAMESPACE

/*
 * Adaptor class for interface com.pthinks.car.engine
 */
class CarAdapter: public QDBusAbstractAdaptor
{
    Q_OBJECT
    Q_CLASSINFO("D-Bus Interface", "com.pthinks.car.engine")
    Q_CLASSINFO("D-Bus Introspection", ""
"  <interface name=\"com.pthinks.car.engine\">\n"
"    <method name=\"start\"/>\n"
"    <method name=\"stop\"/>\n"
"    <method name=\"start1\">\n"
"      <arg direction=\"in\" type=\"i\" name=\"name\"/>\n"
"      <arg direction=\"in\" type=\"s\" name=\"value\"/>\n"
"      <arg direction=\"out\" type=\"b\"/>\n"
"    </method>\n"
"    <method name=\"stop1\">\n"
"      <arg direction=\"out\" type=\"s\"/>\n"
"    </method>\n"
"    <method name=\"addCar\">\n"
"      <arg direction=\"in\" type=\"a(ii)\" name=\"myCar\"/>\n"
"      <annotation value=\"Car\" name=\"com.trolltech.QtDBus.QtTypeName.In0\"/>\n"
"    </method>\n"
"    <method name=\"accelerate\"/>\n"
"    <method name=\"deAccelerate\"/>\n"
"    <signal name=\"statusChanged\">\n"
"      <arg direction=\"out\" type=\"i\" name=\"status\"/>\n"
"    </signal>\n"
"    <method name=\"getStatus\">\n"
"      <arg direction=\"out\" type=\"s\"/>\n"
"    </method>\n"
"  </interface>\n"
        "")
public:
    CarAdapter(QObject *parent);
    virtual ~CarAdapter();

public: // PROPERTIES
public Q_SLOTS: // METHODS
    void accelerate();
    void addCar(Car myCar);
    void deAccelerate();
    QString getStatus();
    void start();
    bool start1(int name, const QString &value);
    void stop();
    QString stop1();
Q_SIGNALS: // SIGNALS
    void statusChanged(int status);
};

#endif