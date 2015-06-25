#include <QString>
#include <QtTest>
#include <assert.h>
#include <QDebug>

#include "ProgramGlowny/pies.h"
#include "ProgramGlowny/listapsow.h"

class SchroniskoTesty : public QObject
{
    Q_OBJECT

public:
    SchroniskoTesty();

private Q_SLOTS:
    void testPies();
    void testDodaniePsa();
    void testUsunieciePsa();
    void testPobranieListyPsow();
};

SchroniskoTesty::SchroniskoTesty()
{
}

void SchroniskoTesty::testPies()
{
    Pies p(24345, "Azor", 4, Lagodny, "Pudel" );

    QCOMPARE( 24345, p.getId() );
    QCOMPARE( QString("Azor"), p.getImie() );
    QCOMPARE( 4, p.getWiek() );
    QCOMPARE( Lagodny, p.getRodzaj() );
    QCOMPARE( QString("Pudel"), p.getRasa() );

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

    // porównanie z niewłaściwym stringiem
    QStringList listaTestowa2;
    listaTestowa2.append( QString("niezgodne dane") );
    listaTestowa2.append( wskPies2->toString() );

    QEXPECT_FAIL("", "Stringi się różnią", Continue);
    QCOMPARE( listaTestowa2, psyWSchronisku.pobierzListePsow() );

    delete wskPies1;
    delete wskPies2;
}

//QVERIFY(true);
QTEST_APPLESS_MAIN(SchroniskoTesty)

#include "tst_schroniskotesty.moc"
