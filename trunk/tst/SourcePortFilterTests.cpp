
#include "LineExamples.hpp"

#include "SourcePortFilter.hpp"
#include "SourcePortIcmpUnreacheableFilter.hpp"
#include "SourcePort.hpp"

#include <gtest/gtest.h>
#include <string>

using namespace std;

TEST(SourcePortFilterTests, appliedFilterToIPv4LineWith2CharactersLenght)
{
    SourcePort sourcePortExpected(LineExamples::sourcePortLineWith2CharactersLenght);
    SourcePortFilter filter;
    SourcePort sourcePortActual = filter.apply(LineExamples::lineWith2CharactersLenght);

    EXPECT_TRUE(sourcePortExpected==sourcePortActual);
}

TEST(SourcePortFilterTests, appliedFilterToIPv4LineWith3CharactersLenght)
{
    SourcePort sourcePortExpected(LineExamples::sourcePortLineWith3CharactersLenght);
    SourcePortFilter filter;
    SourcePort sourcePortActual = filter.apply(LineExamples::lineWith3CharactersLenght);

    EXPECT_TRUE(sourcePortExpected==sourcePortActual);
}

TEST(SourcePortFilterTests, appliedFilterToIPv4LineWith4CharactersLenght)
{
    SourcePort sourcePortExpected(LineExamples::sourcePortLineWith4CharactersLenght);
    SourcePortFilter filter;
    SourcePort sourcePortActual = filter.apply(LineExamples::lineWith4CharactersLenght);

    EXPECT_TRUE(sourcePortExpected==sourcePortActual);
}

TEST(SourcePortFilterTests, appliedFilterToIcmpUnreachableLine)
{
    SourcePort sourcePortExpected(LineExamples::sourcePortLineIcmpUnreacheable);
    SourcePortIcmpUnreacheableFilter filter;
    SourcePort sourcePortActual = filter.apply(LineExamples::lineIcmpUnreacheable);

    EXPECT_TRUE(sourcePortExpected==sourcePortActual);
}
