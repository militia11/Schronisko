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
};

#endif // REJESTRACJAWYDANYCHPSOW_H
