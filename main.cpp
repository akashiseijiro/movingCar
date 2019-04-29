#include "car.h"
#include "car_adaptor.h"
#include <QtGui/QApplication>
#include <QtGui/QGraphicsView>
#include <QtGui/QGraphicsScene>
#include <QtDBus/QDBusConnection>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    QGraphicsScene scene;
    scene.setSceneRect(-500, -500, 1000, 1000);
    scene.setItemIndexMethod(QGraphicsScene::NoIndex);

    Car *car = new Car();
    scene.addItem(car);

    QGraphicsView view(&scene);
    view.setRenderHint(QPainter::Antialiasing);
    view.setBackgroundBrush(Qt::darkGray);
    view.setWindowTitle(QT_TRANSLATE_NOOP(QGraphicsView, "Qt DBus Controlled Car"));
    view.resize(400, 300);
    view.show();

    new CarInterfaceAdaptor(car);
    QDBusConnection connection = QDBusConnection::sessionBus();
    connection.registerObject("/Car", car);
    connection.registerService("com.trolltech.CarExample");

    return app.exec();
}
