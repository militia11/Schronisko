#ifndef LISTAPSOW_H
#define LISTAPSOW_H

#include <QList>
#include <QStringList>
#include "pies.h"

class ListaPsow
{
public:
    ListaPsow();
<<<<<<< HEAD
    void dodajPsa(Pies* pies);
    void usunPsa(Pies *pies);
    QStringList pobierzListePsow();
    QStringList pobierzListePsow(RodzajPsa rodzaj);
=======
    void dodajPsa(Pies* p);
    void usunPsa(Pies *p);
    QStringList  pobierzListePsow();
>>>>>>> pobieranieList
    Pies *getPies(int id);

private:
    QList<Pies*> listaPsow;
};

#endif // LISTAPSOW_H
