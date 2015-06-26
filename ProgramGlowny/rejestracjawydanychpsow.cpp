#include "rejestracjawydanychpsow.h"
#include <QStringList>

RejestracjaWydanychPsow gRejestracjaWydanychPsow;

RejestracjaWydanychPsow::RejestracjaWydanychPsow()
{

}

RejestracjaWydanychPsow::~RejestracjaWydanychPsow()
{
    qDeleteAll(*this);  // usunięcie wskaźników
    clear();            // wyczyszczenie listy
}

void RejestracjaWydanychPsow::dodaj(Pies* pies, Klient* klient)
{
    insert(pies, klient);
}

QStringList RejestracjaWydanychPsow::pobierzListePrzydzielen() const
{
    QStringList listaPrzydzielenPsow;
//    for(QMap <Pies*, Klient*>::iterator it = (*this).begin();
//        it != (*this).end(); ++it ) {
//           ;// listaPrzydzielenPsow.append( (*it)->toString() );
//    }
    return listaPrzydzielenPsow;
}

RejestracjaWydanychPsow::RejestracjaWydanychPsow(const RejestracjaWydanychPsow &) {}

RejestracjaWydanychPsow &RejestracjaWydanychPsow::operator=(const RejestracjaWydanychPsow &)
{
    return *this;
}

