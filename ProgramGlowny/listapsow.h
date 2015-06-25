#ifndef LISTAPSOW_H
#define LISTAPSOW_H

#include <QList>
#include <QStringList>
#include "pies.h"

class ListaPsow
{
public:
    ListaPsow() {}
    void dodajPsa(Pies* pies);
    void usunPsa(Pies *pies);
    QStringList pobierzListePsow();
    QStringList pobierzListePsow(RodzajPsa rodzaj);
    Pies *getPies(int id);

private:
    QList<Pies*> listaPsow;
};

#endif // LISTAPSOW_H
