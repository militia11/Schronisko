#include <QString>
#include <QtTest>
#include <assert.h>
#include <QDebug>

#include "ProgramGlowny/pies.h"
#include "ProgramGlowny/listapsow.h"
#include "ProgramGlowny/transakcja.h"
#include "ProgramGlowny/klient.h"
#include "ProgramGlowny/rejestracjawydanychpsow.h"
#include "ProgramGlowny/przydzielpsatransakcja.h"

extern  ListaPsow gListaPsow;
extern  RejestracjaWydanychPsow gRejestracjaWydanychPsow;

class SchroniskoTesty : public QObject
{
    Q_OBJECT

public:
    SchroniskoTesty();

private Q_SLOTS:

    void testAtrybutyPsa();
    void testDodaniePsa();
    void testUsunieciePsa();
    void testPobranieListyPsow();
    void testPobranieListyPsowDanegoRodzaju();
    void testPrzydzielaniePsa();
    void testAtrybutyKlienta();
};

SchroniskoTesty::SchroniskoTesty()
{
}

void SchroniskoTesty::testAtrybutyPsa()
{
    Pies p(24345, "Azor", 4, Lagodny, "Pudel" );

    QCOMPARE( 24345, p.getId() );
    QCOMPARE( QString("Azor"), p.getImie() );
    QCOMPARE( 4, p.getWiek() );
    QCOMPARE( Lagodny, p.getRodzaj() );
    QCOMPARE( QString("Pudel"), p.getRasa() );

    QEXPECT_FAIL("", "test na niewłaściwe dane : niezgodne ID", Continue);
    QCOMPARE( 98345, p.getId() );

    QEXPECT_FAIL("", "test na niewłaściwe dane : inne imie", Continue);
    QCOMPARE( QString("Burek"), p.getImie() );

    QEXPECT_FAIL("", "test na niewłaściwe dane : inny wiek", Continue);
    QCOMPARE( 12, p.getWiek() );

    QEXPECT_FAIL("", "test na niewłaściwe dane : niezgodny rodzaj", Continue);
    QCOMPARE( Grozny, p.getRodzaj() );

    QEXPECT_FAIL("", "test na niewłaściwe dane : inna rasa", Continue);
    QCOMPARE( QString("Owczarek Bernaski"), p.getRasa() );

}

void SchroniskoTesty::testDodaniePsa()
{
    Pies* wskPies = new Pies(184, "Burek", 4, Grozny, "Bernardyn" );

    ListaPsow psyWSchronisku;
    psyWSchronisku.dodajPsa(wskPies);
    assert(psyWSchronisku.getPies(184));

    delete wskPies;
}

void SchroniskoTesty::testUsunieciePsa()
{
    Pies* wskPies = new Pies(12, "Burek", 4, Grozny, "Bernardyn" );

    ListaPsow psyWSchronisku;
    psyWSchronisku.dodajPsa(wskPies);
    assert( psyWSchronisku.getPies(12) );

    psyWSchronisku.usunPsa(wskPies);
    assert( psyWSchronisku.getPies(12) == 0 );

    delete wskPies;
}

void SchroniskoTesty::testPobranieListyPsow()
{
    Pies* wskPies1 = new Pies(184, "Burek", 4, Grozny, "Bernardyn" );
    Pies* wskPies2 = new Pies(24345, "Azor", 4, Lagodny, "Pudel" );

    ListaPsow psyWSchronisku;
    psyWSchronisku.dodajPsa(wskPies1);
    psyWSchronisku.dodajPsa(wskPies2);

    // porównanie dwóch list stringów
    QStringList listaTestowa1;
    listaTestowa1.append( wskPies1->toString() );
    listaTestowa1.append( wskPies2->toString() );
    QCOMPARE( listaTestowa1, psyWSchronisku.pobierzListePsow() );

    QStringList listaTestowa2;
    listaTestowa2.append( QString("niezgodne dane") );
    listaTestowa2.append( wskPies2->toString() );

    QEXPECT_FAIL("", "test na niewłaściwe dane : porównanie z niewłaściwym stringiem", Continue);
    QCOMPARE( listaTestowa2, psyWSchronisku.pobierzListePsow() );

    delete wskPies1;
    delete wskPies2;

}

void SchroniskoTesty::testPobranieListyPsowDanegoRodzaju()
{
    Pies* wskPies1 = new Pies(1384, "Reksio", 4, Grozny, "Amstaf" );
    Pies* wskPies2 = new Pies(745, "Tofik", 4, Lagodny, "York" );
    Pies* wskPies3 = new Pies(745, "Burek", 4, Lagodny, "Kundel" );

    ListaPsow psyWSchronisku;
    psyWSchronisku.dodajPsa(wskPies1);
    psyWSchronisku.dodajPsa(wskPies2);
    psyWSchronisku.dodajPsa(wskPies3);

    // porównanie dwóch list stringów:

    // właściwa lista z psami łagodnymi
    QStringList listaTestowa1;
    listaTestowa1.append( wskPies2->toString() );
    listaTestowa1.append( wskPies3->toString() );

    QCOMPARE( listaTestowa1, psyWSchronisku.pobierzListePsow(Lagodny) );

    QStringList listaTestowa2;
    listaTestowa2.append( wskPies2->toString() );
    listaTestowa2.append( wskPies3->toString() );
    listaTestowa2.append( wskPies1->toString() );

    QEXPECT_FAIL("", "porównanie z niewłaściwą listą różnych rodzai", Continue);
    QCOMPARE( listaTestowa2, psyWSchronisku.pobierzListePsow(Lagodny) );

    QStringList listaTestowa3;
    listaTestowa3.append( wskPies1->toString() );
    listaTestowa3.append( QString("niezgodne dane"));
    listaTestowa3.append( wskPies3->toString() );

    QEXPECT_FAIL("", "test na niewłaściwe dane : porównanie z niewłaściwym stringiem", Continue);
    QCOMPARE( listaTestowa3, psyWSchronisku.pobierzListePsow() );

    delete wskPies1;
    delete wskPies2;
    delete wskPies3;
}

void SchroniskoTesty::testPrzydzielaniePsa()
{
    Pies* wskPies = new Pies(35, "Dino", 8, Grozny, "Owczarek" );

    gListaPsow.dodajPsa(wskPies);  // przypadek testowy pokazal, ze potrzebujemy globalnej listy psow
    assert(gListaPsow.getPies(35));

    Klient* wskKlient = new Klient(346, "Jan", "Bury", "ul. Osa 12; Bydgoszcz; 85790", 857464757);

    PrzydzielPsaTransakcja przydzielPsa(wskPies, wskKlient);
    przydzielPsa.wykonaj();

    Klient* wskKlientPobrany = gRejestracjaWydanychPsow[wskPies];
    assert(wskKlientPobrany);

    Pies* wskPiesPobrany = gRejestracjaWydanychPsow.key(wskKlient);
    assert(wskPiesPobrany);

    // test pokazał że wymagamy klas RejestracjaWydanychPsow oraz Klient

    //RejestracjaWydanychPsow rejestracja;

    delete wskPies;
    delete wskKlient;
}

void SchroniskoTesty::testAtrybutyKlienta()
{
    Klient klient(123, "Adam", "Kowalski", "ul. Kościelna 12; Bydgoszcz; 85790", 600821340);

    QCOMPARE( 123, klient.getId() );
    QCOMPARE( QString("Adam"), klient.getImie() );
    QCOMPARE( QString("Kowalski"), klient.getNazwisko() );
    QCOMPARE( QString("ul. Kościelna 12; Bydgoszcz; 85790"), klient.getUlica() );
    QCOMPARE( 600821340, klient.getNumerTelefonu() );

    QEXPECT_FAIL("", "test na niewłaściwe dane : niezgodny numer Id", Continue);
    QCOMPARE( 345, klient.getId());

    QEXPECT_FAIL("", "test na niewłaściwe dane : niezgodne imie", Continue);
    QCOMPARE( QString("kuba"), klient.getImie());

    QEXPECT_FAIL("", "test na niewłaściwe dane : niezgodne nazwisko", Continue);
    QCOMPARE( QString("Nowicki"), klient.getNazwisko() );

    QEXPECT_FAIL("", "test na niewłaściwe dane : niezgodna ulica", Continue);
    QCOMPARE( QString("ul. Sławków 3; Lublin; 44230"), klient.getUlica() );

    QEXPECT_FAIL("", "test na niewłaściwe dane : niezgodny numer", Continue);
    QCOMPARE( 515987464, klient.getNumerTelefonu() );
}
QTEST_APPLESS_MAIN(SchroniskoTesty)

#include "tst_schroniskotesty.moc"
