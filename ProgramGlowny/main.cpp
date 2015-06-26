#include <QCoreApplication>
#include<QDate>
#include<QDebug>
int main(int argc, char *argv[])
{
    QDate dat(2012,12,11);
    qDebug() << dat.toString();
    QCoreApplication a(argc, argv);
    return a.exec();
}
