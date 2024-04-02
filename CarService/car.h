#ifndef CAR_H
#define CAR_H
#include<QDebug>
#include<QDBusArgument>
#include<QtPlugin>
#include<QtDBus>
class Car
{
public:
    Car();
    QString name() const;
    void setName(const QString &newName);

    QString id() const;
    void setId(const QString &newId);
    Car(const Car &car);
    Car &operator=(const Car& car);
    friend QDBusArgument &operator<<(QDBusArgument &argument,const Car& car);
    friend QDBusArgument operator>>(const QDBusArgument &argument,Car &car);
    static void registerMetaType();
private:
    QString m_name;
    QString m_id;
};
Q_DECLARE_METATYPE(Car);
#endif // CAR_H
