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
};

SchroniskoTesty::SchroniskoTesty()
{
}

void SchroniskoTesty::testPies()
{
    //imie()
    Pies p(24345, "Azor", 4 );

    QCOMPARE( 24345, p.getId() );
    QCOMPARE( QString("Azor"), p.getImie() );
    QCOMPARE( 4, p.getWiek() );
    //QVERIFY(true);
}

QTEST_APPLESS_MAIN(SchroniskoTesty)

#include "tst_schroniskotesty.moc"
