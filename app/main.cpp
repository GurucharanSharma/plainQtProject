
/**************************************************
 * This is a sample plugin project produced by
 * two rookies Gurucharan and shakti singh. Yo!
 *************************************************/

#include <QtQuick/QQuickView>
#include <QGuiApplication>

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);
    QQuickView view;
    view.setResizeMode(QQuickView::SizeRootObjectToView);
    view.setSource(Qurl("qrc:///app.qml"));
    view.show();
    return app.exec();
}
