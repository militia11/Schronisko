#include <QString>
#include <QtTest>
#include "ProgramGlowny/pies.h"

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
    Pies p(24345, "Azor", 4 );

    QCOMPARE( 24345, p.getId() );
    QCOMPARE( QString("Azor"), p.getImie() );
    QCOMPARE( 4, p.getWiek() );
    //QVERIFY(true);
}

void SchroniskoTesty::testListaPsow()
{
    //ListaPsow lp;
}

QTEST_APPLESS_MAIN(SchroniskoTesty)

#include "tst_schroniskotesty.moc"
