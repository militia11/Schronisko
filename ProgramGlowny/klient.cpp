#include "klient.h"

Klient::Klient(QString imie, QString nazwisko, QString ulica, int numerTelefonu)
    :  imie(imie),
      nazwisko(nazwisko),
      ulica(ulica),
      numerTelefonu(numerTelefonu)
{

}

QString Klient::getImie() const
{
    return imie;
}

QString Klient::getNazwisko() const
{
    return nazwisko;
}

QString Klient::getUlica() const
{
    return ulica;
}

int Klient::getNumerTelefonu() const
{
    return numerTelefonu;
}

