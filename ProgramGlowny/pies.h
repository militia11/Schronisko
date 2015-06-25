#ifndef PIES_H
#define PIES_H

#include<QString>

enum RodzajPsa { Lagodny, Grozny };

class Pies
{

public:
    Pies(int id, QString imie, int wiek, RodzajPsa rodzaj, QString rasa);
    int getId() const;
    QString getImie() const;
    int getWiek() const;
    RodzajPsa getRodzaj() const;
    QString getRasa() const;
    QString toString() const;

private:
    int id;
    QString imie;
    int wiek;
    RodzajPsa rodzaj;
    QString rasa;
};

#endif // PIES_H
