#ifndef KLIENT_H
#define KLIENT_H

#include <QString>

class Klient
{
public:
    Klient(QString imie, QString nazwisko, QString ulica, int numerTelefonu);
    QString getImie() const;
    QString getNazwisko() const;
    QString getUlica() const;
    int getNumerTelefonu() const;

private:
    QString imie;
    QString nazwisko;
    QString ulica;
    int numerTelefonu;
};

#endif // KLIENT_H
