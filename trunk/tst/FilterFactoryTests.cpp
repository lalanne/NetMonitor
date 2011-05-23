
#include "LineExamples.hpp"

#include "FilterFactory.hpp"
#include "DestinationIpFilter.hpp"

#include <gtest/gtest.h>

#include <memory>

using namespace std;

TEST(FilterFactoryTests, getAndApplyDestionationIpFilterWithDefaultLine)
{
    FilterFactory filterFactory;
    DestinationIp destinationIpExpected(LineExamples::destinationIpLine);
    auto_ptr<DestinationIpFilter> destinationIpFilter(filterFactory.getDestinationIpFilter(LineExamples::line));
    DestinationIp destinationIp(destinationIpFilter->apply(LineExamples::line));

    EXPECT_TRUE(destinationIpExpected == destinationIp);
}

TEST(FilterFactoryTests, getAndApplyDestionationIpFilterLineWith2CharactersLenght)
{
    FilterFactory filterFactory;
    DestinationIp destinationIpExpected(LineExamples::destinationIpLineWith2CharactersLenght);
    auto_ptr<DestinationIpFilter> destinationIpFilter(filterFactory.getDestinationIpFilter(LineExamples::lineWith2CharactersLenght));
    DestinationIp destinationIp(destinationIpFilter->apply(LineExamples::lineWith2CharactersLenght));

    EXPECT_TRUE(destinationIpExpected == destinationIp);
}

TEST(FilterFactoryTests, getAndApplyDestionationIpFilterLineWith3CharactersLenght)
{
    FilterFactory filterFactory;
    DestinationIp destinationIpExpected(LineExamples::destinationIpLineWith3CharactersLenght);
    auto_ptr<DestinationIpFilter> destinationIpFilter(filterFactory.getDestinationIpFilter(LineExamples::lineWith3CharactersLenght));
    DestinationIp destinationIp(destinationIpFilter->apply(LineExamples::lineWith3CharactersLenght));

    EXPECT_TRUE(destinationIpExpected == destinationIp);
}

TEST(FilterFactoryTests, getAndApplyDestionationIpFilterLineWith4CharactersLenght)
{
    FilterFactory filterFactory;
    DestinationIp destinationIpExpected(LineExamples::destinationIpLineWith4CharactersLenght);
    auto_ptr<DestinationIpFilter> destinationIpFilter(filterFactory.getDestinationIpFilter(LineExamples::lineWith4CharactersLenght));
    DestinationIp destinationIp(destinationIpFilter->apply(LineExamples::lineWith4CharactersLenght));

    EXPECT_TRUE(destinationIpExpected == destinationIp);
}

TEST(FilterFactoryTests, getAndApplyDestionationIpFilterWithIcmpUnreacheableLine)
{
    FilterFactory filterFactory;
    DestinationIp destinationIpExpected(LineExamples::destinationIpLineIcmpUnreacheable);
    auto_ptr<DestinationIpFilter> destinationIpFilter(filterFactory.getDestinationIpFilter(LineExamples::lineIcmpUnreacheable));
    DestinationIp destinationIp(destinationIpFilter->apply(LineExamples::lineIcmpUnreacheable));

    EXPECT_TRUE(destinationIpExpected == destinationIp);
}
