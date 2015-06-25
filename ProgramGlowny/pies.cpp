#include "pies.h"

Pies::Pies(int id, QString imie, int wiek, RodzajPsa rodzaj, QString rasa)
    : m_id(id),
      m_imie(imie),
      m_wiek(wiek),
      m_rodzaj(rodzaj),
      m_rasa(rasa)
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

RodzajPsa Pies::getRodzaj() const
{
    return m_rodzaj;
}

QString Pies::getRasa() const
{
    return m_rasa;
}

QString Pies::toString() const
{
    return QString("ID: %1 Pies o imieniu: %2 Wiek: %3 Rodzaj: %4 Rasa: %5").arg(m_id).arg(m_imie).arg(m_wiek).arg(m_rodzaj).arg(m_rasa);
}

