#include <QtGui/QApplication>
#include "qmlapplicationviewer.h"

Q_DECL_EXPORT int main(int argc, char *argv[])
{
    QScopedPointer<QApplication> app(createApplication(argc, argv));

    QmlApplicationViewer viewer;
    viewer.setMainQmlFile(QLatin1String("qml/Student_manager/main.qml"));
    viewer.setMinimumWidth(1500);
    viewer.setMinimumHeight(700);
    viewer.showMaximized();

    return app->exec();
}
