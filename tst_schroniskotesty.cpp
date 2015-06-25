#include <QString>
#include <QtTest>
#include <assert.h>

#include "ProgramGlowny/pies.h"
#include "ProgramGlowny/listapsow.h"

class SchroniskoTesty : public QObject
{
    Q_OBJECT

public:
    SchroniskoTesty();

private Q_SLOTS:
    void testPies();
    void testListaPsow();
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

void SchroniskoTesty::testListaPsow()
{
    Pies* wsk_Pies = new Pies(184, "Burek", 4, Grozny, "Bernardyn" );
    ListaPsow lp;
    lp.dodajPsa(wsk_Pies);
    QStringList stringLista = lp.pobierzListePsow();
    //QVERIFY(true);
}

QTEST_APPLESS_MAIN(SchroniskoTesty)

#include "tst_schroniskotesty.moc"
