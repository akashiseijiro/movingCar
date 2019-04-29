#include "car_adaptor.h"
#include <QtCore/QMetaObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>

/*
 * Implementation of adaptor class CarInterfaceAdaptor
 */

CarInterfaceAdaptor::CarInterfaceAdaptor(QObject *parent)
    : QDBusAbstractAdaptor(parent)
{
    // constructor
    setAutoRelaySignals(true);
}

CarInterfaceAdaptor::~CarInterfaceAdaptor()
{
    // destructor
}

void CarInterfaceAdaptor::accelerate()
{
    // handle method call com.trolltech.Examples.CarInterface.accelerate
    QMetaObject::invokeMethod(parent(), "accelerate");
}

void CarInterfaceAdaptor::decelerate()
{
    // handle method call com.trolltech.Examples.CarInterface.decelerate
    QMetaObject::invokeMethod(parent(), "decelerate");
}

void CarInterfaceAdaptor::turnLeft()
{
    // handle method call com.trolltech.Examples.CarInterface.turnLeft
    QMetaObject::invokeMethod(parent(), "turnLeft");
}

void CarInterfaceAdaptor::turnRight()
{
    // handle method call com.trolltech.Examples.CarInterface.turnRight
    QMetaObject::invokeMethod(parent(), "turnRight");
}
