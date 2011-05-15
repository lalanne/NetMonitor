
#include "LineExamples.hpp"

#include "SourcePortFilter.hpp"
#include "SourcePort.hpp"

#include <gtest/gtest.h>
#include <string>

using namespace std;

TEST(SourcePortFilterTests, appliedFilterToIPv4LineWith2CharactersLenght)
{
    SourcePort sourcePortExpected("443");
    SourcePortFilter filter;
    SourcePort sourcePortActual = filter(LineExamples::lineWith2CharactersLenght);

    EXPECT_TRUE(sourcePortExpected==sourcePortActual);
}

TEST(SourcePortFilterTests, appliedFilterToIPv4LineWith3CharactersLenght)
{
    SourcePort sourcePortExpected("80");
    SourcePortFilter filter;
    SourcePort sourcePortActual = filter(LineExamples::lineWith3CharactersLenght);

    EXPECT_TRUE(sourcePortExpected==sourcePortActual);
}

TEST(SourcePortFilterTests, appliedFilterToIPv4LineWith4CharactersLenght)
{
    SourcePort sourcePortExpected("1935");
    SourcePortFilter filter;
    SourcePort sourcePortActual = filter(LineExamples::lineWith4CharactersLenght);

    EXPECT_TRUE(sourcePortExpected==sourcePortActual);
}

TEST(SourcePortFilterTests, appliedFilterToIcmpUnreachableLine)
{
    SourcePort sourcePortExpected("");
    SourcePortFilter filter;
    SourcePort sourcePortActual = filter(LineExamples::lineIcmpUnreacheable);

    EXPECT_TRUE(sourcePortExpected==sourcePortActual);
}
