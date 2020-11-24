#include "smartstreet.h"
#include <QApplication>
#include <QSplashScreen>
#include <QTimer>
#include <QPixmap>

int main(int argc, char *argv[])
{

    QApplication a(argc, argv);
       a.setWindowIcon(QIcon("C:/Users/pinkyy/Desktop/projet qt/Final - Copie/image/traffic_light1600.png"));
       QSplashScreen *splach=new QSplashScreen();
       splach->setPixmap(QPixmap("‪C:/Users/pinkyy/Desktop/projet qt/Final - Copie/image/Defcon24.png"));
       splach->show();
       QTimer::singleShot(2500,splach,SLOT(close()));
       SmartStreet x;
       QTimer::singleShot(2500,&x,SLOT(show()));

       return a.exec();
}
