#include "przydzielpsatransakcja.h"
#include "listapsow.h"
#include "rejestracjawydanychpsow.h"

extern ListaPsow gListaPsow;
extern RejestracjaWydanychPsow gRejestracjaWydanychPsow;

PrzydzielPsaTransakcja::PrzydzielPsaTransakcja(Pies* pies, Klient* klient)
    : wskPies(pies),
      wskKlient(klient)
{

}

void PrzydzielPsaTransakcja::wykonaj()
{
    gListaPsow.usunPsa(wskPies);
    gRejestracjaWydanychPsow.dodaj(wskPies, wskKlient);

}

