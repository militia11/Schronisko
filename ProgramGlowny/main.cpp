#include <QCoreApplication>
#include<pies.h>
#include<listapsow.h>
#include<QDebug>
#include<QList>
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Pies p(24345, "Azor", 4, Lagodny, "Pudel" );
    qDebug() << p.toString();
    return a.exec();
}
