#ifndef CAR_ADAPTOR_H_1264773009
#define CAR_ADAPTOR_H_1264773009

#include <QtCore/QObject>
#include <QtDBus/QtDBus>

class QByteArray;
template<class T> class QList;
template<class Key, class Value> class QMap;
class QString;
class QStringList;
class QVariant;

/*
 * Adaptor class for interface com.trolltech.Examples.CarInterface
 */
class CarInterfaceAdaptor: public QDBusAbstractAdaptor
{
    Q_OBJECT
    Q_CLASSINFO("D-Bus Interface", "com.trolltech.Examples.CarInterface")
    Q_CLASSINFO("D-Bus Introspection", ""
"  <interface name=\"com.trolltech.Examples.CarInterface\">\n"
"    <method name=\"accelerate\"/>\n"
"    <method name=\"decelerate\"/>\n"
"    <method name=\"turnLeft\"/>\n"
"    <method name=\"turnRight\"/>\n"
"    <signal name=\"crashed\"/>\n"
"  </interface>\n"
        "")
public:
    CarInterfaceAdaptor(QObject *parent);
    virtual ~CarInterfaceAdaptor();

public: // PROPERTIES
public Q_SLOTS: // METHODS
    void accelerate();
    void decelerate();
    void turnLeft();
    void turnRight();
Q_SIGNALS: // SIGNALS
    void crashed();
};

#endif
