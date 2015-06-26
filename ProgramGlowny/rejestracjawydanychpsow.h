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

    void dodaj(Pies* pies, Klient* klient);
    QStringList pobierzListePrzydzielen() const;

private:
    RejestracjaWydanychPsow(const RejestracjaWydanychPsow&);
    RejestracjaWydanychPsow& operator=(const RejestracjaWydanychPsow&);
};

#endif // REJESTRACJAWYDANYCHPSOW_H
