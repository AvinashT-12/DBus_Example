#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <CarService.h>
#include<Car_Adapter.h>
#include <car.h>
int main(int argc, char *argv[])
{
#if QT_VERSION < QT_VERSION_CHECK(6, 0, 0)
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
#endif
    QGuiApplication app(argc, argv);
    Car::registerMetaType();
    QQmlApplicationEngine engine;
    CarService serviceObject;
    CarAdapter caradapterObject(&serviceObject);
    auto conn=QDBusConnection::sessionBus();
    auto status=conn.registerService("com.pthinks.car.engine");//register to service
    if(!status){
        qWarning()<<"Not able to register for service";
    }
    else
    {
        qDebug()<<"Registered to service";
    }
    if(!conn.registerObject("/Engine",&serviceObject)) //register to object
    {
        qWarning()<<"Not able to register for object";
    }
    else
    {
        qDebug()<<"Registered to Object";
    }

    QMetaObject::invokeMethod(&serviceObject,"start");
    const QUrl url(QStringLiteral("qrc:/main.qml"));
    QObject::connect(
        &engine,
        &QQmlApplicationEngine::objectCreated,
        &app,
        [url](QObject *obj, const QUrl &objUrl) {
            if (!obj && url == objUrl)
                QCoreApplication::exit(-1);
        },
        Qt::QueuedConnection);
    engine.load(url);

    return app.exec();
}
