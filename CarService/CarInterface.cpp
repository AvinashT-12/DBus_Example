/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp -c CarInterface -i Car.h -p CarInterface.h:CarInterface.cpp car.xml
 *
 * qdbusxml2cpp is Copyright (C) 2020 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * This file may have been hand-edited. Look for HAND-EDIT comments
 * before re-generating it.
 */

#include "CarInterface.h"

/*
 * Implementation of interface class CarInterface
 */

CarInterface::CarInterface(const QString &service, const QString &path, const QDBusConnection &connection, QObject *parent)
    : QDBusAbstractInterface(service, path, staticInterfaceName(), connection, parent)
{
}

CarInterface::~CarInterface()
{
}

