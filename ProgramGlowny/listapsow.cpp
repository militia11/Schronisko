#include "listapsow.h"
#include"pies.h"
ListaPsow::ListaPsow()
{

}

void ListaPsow::dodajPsa(Pies *p)
{
    listaPsow.append(p);
}

void ListaPsow::usunPsa(Pies* p)
{
    listaPsow.removeOne(p);
}

QStringList ListaPsow::pobierzListePsow()
{
    QStringList stringListaPsow;
    for(QList<Pies*>::iterator it = listaPsow.begin();
        it != listaPsow.end(); ++it ) {
            stringListaPsow.append( (*it)->toString() );
    }
    return stringListaPsow;
}

Pies* ListaPsow::getPies(int id)
{
    for(QList<Pies*>::iterator it = listaPsow.begin();
        it != listaPsow.end(); ++it ) {
           if( (*it)->getId() == id )
               return *it;
    }
    return 0;
}

