#include "listapsow.h"

ListaPsow::ListaPsow()
{

}

void ListaPsow::dodajPsa(Pies *pies)
{
    listaPsow.append(pies);
}

void ListaPsow::usunPsa(Pies* pies)
{
    listaPsow.removeOne(pies);
}

QStringList ListaPsow::pobierzListePsow(RodzajPsa rodzaj)
{
    QStringList wynikowaListaPsow;
    for(QList<Pies*>::iterator it = listaPsow.begin();
        it != listaPsow.end(); ++it ) {
        if( (*it)->getRodzaj() == rodzaj) {
            wynikowaListaPsow.append( (*it)->toString() );
        }
    }
    return wynikowaListaPsow;
}

QStringList ListaPsow::pobierzListePsow()
{
    QStringList wynikowaListaPsow;
    for(QList<Pies*>::iterator it = listaPsow.begin();
        it != listaPsow.end(); ++it ) {
            wynikowaListaPsow.append( (*it)->toString() );
    }
    return wynikowaListaPsow;
}

Pies* ListaPsow::getPies(int id)
{
    for(QList<Pies*>::iterator it = listaPsow.begin();
        it != listaPsow.end(); ++it ) {
           if( (*it)->getId() == id )
               return *it;
    }
<<<<<<< HEAD
    return 0;
=======
    return stringListaPsow;
>>>>>>> pobieranieList
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

