#include "listapsow.h"
#include"pies.h"
ListaPsow::ListaPsow()
{

}

void ListaPsow::dodajPsa(Pies *p)
{
    m_listaPsow.append(p);
}

void ListaPsow::usunPsa(Pies* p)
{
    m_listaPsow.removeOne(p);
}

QStringList ListaPsow::pobierzListePsow()
{
    QStringList listaPsow;
    for(QList<Pies*>::iterator it = m_listaPsow.begin();
        it != m_listaPsow.end(); ++it ) {
            listaPsow.append( (*it)->toString() );
    }
    //l.append();
    return listaPsow;
}

