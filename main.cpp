#include "mainwindow.h"
#include <QApplication>
#include <QTranslator>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QTranslator translator;
    //translator.load("language.qm",
    //              QCoreApplication::applicationDirPath());
    translator.load(QLocale(), QLatin1String("language"),
                    QLatin1String("_"), QCoreApplication::applicationDirPath());
    a.installTranslator(&translator);
    a.setStyle("fusion");
    MainWindow w;
    w.show();

    return a.exec();
}
