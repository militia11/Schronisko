#ifndef PIES_H
#define PIES_H

#include <QString>

class QDate;
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
    QDate* getDataPrzydzielenia() const;
    void setDatePrzydzielenia(QDate *data);
    QString toString() const;

private:
    int id;
    QString imie;
    int wiek;
    RodzajPsa rodzaj;
    QString rasa;
    QDate* dataPrzydzielenia;
};

#endif // PIES_H
