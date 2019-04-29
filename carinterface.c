#include "car_interface.h"
/*
 * Implementation of interface class ComTrolltechExamplesCarInterfaceInterface
 */

ComTrolltechExamplesCarInterfaceInterface::ComTrolltechExamplesCarInterfaceInterface(const QString &service, const QString &path, const QDBusConnection &connection, QObject *parent)
    : QDBusAbstractInterface(service, path, staticInterfaceName(), connection, parent)
{
}

ComTrolltechExamplesCarInterfaceInterface::~ComTrolltechExamplesCarInterfaceInterface()
{
}
