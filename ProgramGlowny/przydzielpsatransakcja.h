#ifndef PRZYDZIELPSATRANSAKCJA_H
#define PRZYDZIELPSATRANSAKCJA_H

#include "transakcja.h"

class Pies;
class Klient;
class PrzydzielPsaTransakcja : public Transakcja
{

public:
    PrzydzielPsaTransakcja(Pies* pies, Klient* klient);
    virtual void wykonaj();

private:
    // bloki kopiowania tu !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
    Pies* wskPies;
    Klient* wskKlient;
};

#endif // PRZYDZIELPSATRANSAKCJA_H
