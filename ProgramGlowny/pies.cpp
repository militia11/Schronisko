#include "pies.h"

Pies::Pies(int id, QString imie, int wiek)
    : m_id(id),
      m_imie(imie),
      m_wiek(wiek)
{

}

int Pies::getId() const
{
    return m_id;
}

QString Pies::getImie() const
{
    return m_imie;
}

int Pies::getWiek() const
{
    return m_wiek;
}

