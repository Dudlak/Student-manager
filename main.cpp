#include <QtGui/QApplication>
#include <QGraphicsDropShadowEffect>
#include <QtDeclarative/QDeclarativeContext>
#include <QtDeclarative/qdeclarative.h>

#include "qmlapplicationviewer.h"
#include "apptheme.h"

Q_DECL_EXPORT int main(int argc, char *argv[])
{
    QScopedPointer<QApplication> app(createApplication(argc, argv));

    // важно для правильного хранения темы
    app->setOrganizationName("Dudlak");
    app->setApplicationName("DesignTestApp");

    AppTheme theme;

    qmlRegisterType<QGraphicsDropShadowEffect>("Effects", 1, 0, "DropShadow");

    QmlApplicationViewer viewer;
    viewer.rootContext()->setContextProperty("Theme", &theme);
    viewer.setMainQmlFile(QLatin1String("qml/Student_manager/main.qml"));
    viewer.setMinimumWidth(1500);
    viewer.setMinimumHeight(700);
    viewer.showMaximized();

    return app->exec();
}
