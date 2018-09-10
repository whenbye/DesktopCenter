#include "EduDesktopMainWindow.h"
#include <QtWidgets/QApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    EduDesktopMainWindow w;
    w.show();
    qDebug() << "abc" << endl;
    return a.exec();
}
