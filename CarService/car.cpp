#include "car.h"

Car::Car() {
    qDebug()<<Q_FUNC_INFO;
}

QString Car::name() const
{
    return m_name;
}

void Car::setName(const QString &newName)
{
    m_name = newName;
}

QString Car::id() const
{
    return m_id;
}

void Car::setId(const QString &newId)
{
    m_id = newId;
}

Car::Car(const Car &car)
{
    m_id=car.id();
    m_name=car.name();
}

Car &Car::operator=(const Car &car)
{
    m_id=car.id();
    m_name=car.name();
    return *this;
}

QDBusArgument &operator<<(QDBusArgument &argument,const Car& car)
{
    argument.beginStructure();
    argument<<car.m_name;
    argument<<car.m_id;
    argument.endStructure();
    return argument;
}
QDBusArgument operator>>(const QDBusArgument &argument,Car &car)
{
    argument.beginStructure();
    argument>>car.m_name;
    argument>>car.m_id;
    argument.endStructure();
    return argument;
}
void Car::registerMetaType()
{
    qRegisterMetaType<Car>("Car");
    qDBusRegisterMetaType<Car>();
}
