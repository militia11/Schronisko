#include "rejestracjawydanychpsow.h"

RejestracjaWydanychPsow gRejestracjaWydanychPsow;

RejestracjaWydanychPsow::RejestracjaWydanychPsow()
{

}

RejestracjaWydanychPsow::~RejestracjaWydanychPsow()
{
    //qDeleteAll(*this);//
    //clear();
}

void RejestracjaWydanychPsow::dodaj(Pies* pies, Klient* klient)
{
    insert(pies, klient);
}

