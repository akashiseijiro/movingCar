#ifndef CAR_INTERFACE_H_1264772826
#define CAR_INTERFACE_H_1264772826

#include <QtCore/QObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>
#include <QtDBus/QtDBus>

/*
 * Proxy class for interface com.trolltech.Examples.CarInterface
 */
class ComTrolltechExamplesCarInterfaceInterface: public QDBusAbstractInterface
{
    Q_OBJECT
public:
    static inline const char *staticInterfaceName()
    { return "com.trolltech.Examples.CarInterface"; }

public:
    ComTrolltechExamplesCarInterfaceInterface(const QString &service, const QString &path, const QDBusConnection &connection, QObject *parent = 0);

    ~ComTrolltechExamplesCarInterfaceInterface();

public Q_SLOTS: // METHODS
    inline QDBusPendingReply<> accelerate()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QLatin1String("accelerate"), argumentList);
    }

    inline QDBusPendingReply<> decelerate()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QLatin1String("decelerate"), argumentList);
    }

    inline QDBusPendingReply<> turnLeft()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QLatin1String("turnLeft"), argumentList);
    }

    inline QDBusPendingReply<> turnRight()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QLatin1String("turnRight"), argumentList);
    }

Q_SIGNALS: // SIGNALS
    void crashed();
};

namespace com {
  namespace trolltech {
    namespace Examples {
      typedef ::ComTrolltechExamplesCarInterfaceInterface CarInterface;
    }
  }
}
#endif
