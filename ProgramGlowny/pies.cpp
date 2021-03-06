#include "pies.h"
#include "QDate"


#include<QDebug>
Pies::Pies(int id, QString imie, int wiek, RodzajPsa rodzaj, QString rasa)
    : id(id),
      imie(imie),
      wiek(wiek),
      rodzaj(rodzaj),
      rasa(rasa),
      dataPrzydzielenia(0)
{
}

int Pies::getId() const
{
    return id;
}

QString Pies::getImie() const
{
    return imie;
}

int Pies::getWiek() const
{
    return wiek;
}

RodzajPsa Pies::getRodzaj() const
{
    return rodzaj;
}

QString Pies::getRasa() const
{
    return rasa;
}

QDate* Pies::getDataPrzydzielenia() const
{
    return dataPrzydzielenia;
}

void Pies::setDatePrzydzielenia(QDate* data)
{
    dataPrzydzielenia = data;
}

QString Pies::toString() const
{
    return QString("ID: %1 - %2 Wiek: %3 Rasa: %5").arg(id).arg(imie).arg(wiek).arg(rasa);
}

Pies::Pies(const Pies &) {}

Pies &Pies::operator=(const Pies &)
{
    return *this;
}

