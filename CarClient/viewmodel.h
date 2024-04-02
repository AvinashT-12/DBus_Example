#ifndef VIEWMODEL_H
#define VIEWMODEL_H

#include <QObject>
#include<QDebug>
#include <../CarService/CarInterface.h>
#include<../CarService/car.h>
class ViewModel : public QObject
{
    Q_OBJECT
public:
    Q_PROPERTY(CarInterface *carEngine READ getCarEngine WRITE setCarEngine NOTIFY carEngineChanged FINAL)
    explicit ViewModel(QObject *parent = nullptr);
    ~ViewModel();
    CarInterface *getCarEngine() const;
    void setCarEngine(CarInterface *newCarEngine);

    QString status() const;
    void setStatus(const QString &newStatus);

    Q_PROPERTY(QString status READ status WRITE setStatus NOTIFY statusChanged FINAL)
private:
    CarInterface* carEngine;
    QString m_status;


signals:
    void carEngineChanged();
    void statusChanged();
};

#endif // VIEWMODEL_H
