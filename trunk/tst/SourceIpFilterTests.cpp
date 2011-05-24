
#include "LineExamples.hpp"

#include "SourceIpFilter.hpp"
#include "SourceIpIcmpUnreacheableFilter.hpp"
#include "SourceIp802_3Filter.hpp"
#include "SourceIp.hpp"

#include <gtest/gtest.h>
#include <string>

using namespace std;

TEST(SourceIpFilterTests, appliedFilterToIPv4LineWith2CharactersLenght)
{
    SourceIp sourceIpExpected(LineExamples::sourceIpLineWith2CharactersLenght);
    SourceIpFilter filter;
    SourceIp sourceIpActual = filter.apply(LineExamples::lineWith2CharactersLenght);

    EXPECT_TRUE(sourceIpExpected==sourceIpActual);
}

TEST(SourceIpFilterTests, appliedFilterToIPv4LineWith3CharactersLenght)
{
    SourceIp sourceIpExpected(LineExamples::sourceIpLineWith3CharactersLenght);
    SourceIpFilter filter;
    SourceIp sourceIpActual = filter.apply(LineExamples::lineWith3CharactersLenght);

    EXPECT_TRUE(sourceIpExpected==sourceIpActual);
}

TEST(SourceIpFilterTests, appliedFilterToIPv4LineWith4CharactersLenght)
{
    SourceIp sourceIpExpected(LineExamples::sourceIpLineWith4CharactersLenght);
    SourceIpFilter filter;
    SourceIp sourceIpActual = filter.apply(LineExamples::lineWith4CharactersLenght);

    EXPECT_TRUE(sourceIpExpected==sourceIpActual);
}

TEST(SourceIpFilterTests, appliedFilterToIcmpUnreachableLine)
{
    SourceIp sourceIpExpected(LineExamples::sourceIpLineIcmpUnreacheable);
    SourceIpIcmpUnreacheableFilter filter;
    SourceIp sourceIpActual = filter.apply(LineExamples::lineIcmpUnreacheable);

    EXPECT_TRUE(sourceIpExpected==sourceIpActual);
}

TEST(SourceIpFilterTests, appliedFilterTo802_3Line)
{
    SourceIp sourceIpExpected(LineExamples::sourceIpLine802_3);
    SourceIp802_3Filter filter;
    SourceIp sourceIpActual = filter.apply(LineExamples::line802_3);

    EXPECT_TRUE(sourceIpExpected==sourceIpActual);
}





