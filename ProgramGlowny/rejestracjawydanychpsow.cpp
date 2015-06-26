#include "rejestracjawydanychpsow.h"
#include <QStringList>
#include <QTextStream>

RejestracjaWydanychPsow gRejestracjaWydanychPsow;

RejestracjaWydanychPsow::RejestracjaWydanychPsow()
{
}

RejestracjaWydanychPsow::~RejestracjaWydanychPsow()
{
    qDeleteAll(*this);  // usunięcie wskaźników
    clear();            // wyczyszczenie listy
}

void RejestracjaWydanychPsow::dodaj(Pies* wskPies, Klient* wskKlient)
{
    insert(wskPies, wskKlient);
}

QString RejestracjaWydanychPsow::listaPrzydzielenPsow() const
{
    QString listaPrzydzielenPsow;
    QTextStream strumienWyjscie (&listaPrzydzielenPsow);
    ConstIterator it = constBegin();
    for ( ; it != constEnd(); ++it)
        strumienWyjscie << "[" << it.key()->toString()   // klucz
        << "]" << " : ["
        << it.value()->toString()                        // wartość
        << "]" << endl;
    return listaPrzydzielenPsow;
}

RejestracjaWydanychPsow::RejestracjaWydanychPsow(const RejestracjaWydanychPsow &) : QMap <Pies*, Klient*>() {}

RejestracjaWydanychPsow &RejestracjaWydanychPsow::operator=(const RejestracjaWydanychPsow)
{
     return *this;
}



