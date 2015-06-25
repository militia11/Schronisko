#ifndef LISTAPSOW_H
#define LISTAPSOW_H

#include<QList>
#include<QStringList>

class Pies;
class ListaPsow
{
public:
    ListaPsow();
    void dodajPsa(Pies* p);
    void usunPsa(Pies *p);
    QStringList  pobierzListePsow();

private:
    QList<Pies*> listaPsow;
};

#endif // LISTAPSOW_H
