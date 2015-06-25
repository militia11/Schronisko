#include "listapsow.h"

ListaPsow::ListaPsow()
{

}

void ListaPsow::dodajPsa(Pies *p)
{
    m_ListaPsow.append(p);
}

void ListaPsow::usunPsa(Pies* p)
{
    m_ListaPsow.removeOne(p);
}

