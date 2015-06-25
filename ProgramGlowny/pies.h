#ifndef PIES_H
#define PIES_H

#include<QString>
class Pies
{
public:
    Pies(int id, QString imie, int wiek);
    int getId() const;
    QString getImie() const;
    int getWiek() const;

private:
    int m_id;
    QString m_imie;
    int m_wiek;
};

#endif // PIES_H
