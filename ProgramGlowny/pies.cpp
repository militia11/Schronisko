#include "pies.h"

Pies::Pies(int id, QString imie, int wiek, RodzajPsa rodzaj, QString rasa)
    : id(id),
      imie(imie),
      wiek(wiek),
      rodzaj(rodzaj),
      rasa(rasa)
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

QString Pies::toString() const
{
    return QString("ID: %1 Pies o imieniu: %2 Wiek: %3 Rodzaj: %4 Rasa: %5").arg(id).arg(imie).arg(wiek).arg(rodzaj).arg(rasa);
}
