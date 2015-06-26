#ifndef REJESTRACJAWYDANYCHPSOW_H
#define REJESTRACJAWYDANYCHPSOW_H

#include <QMap>
#include "pies.h"
#include "klient.h"

class Pies;

class RejestracjaWydanychPsow : public QMap <Pies*, Klient*>
{
public:
     RejestracjaWydanychPsow();
    ~RejestracjaWydanychPsow();

    void dodaj(Pies* wskPies, Klient* wskKlient);
    QString listaPrzydzielenPsow() const; //pobierzListePrzydzielen

private:
    RejestracjaWydanychPsow(const RejestracjaWydanychPsow&);
    RejestracjaWydanychPsow& operator=(const RejestracjaWydanychPsow);
};

#endif // REJESTRACJAWYDANYCHPSOW_H
