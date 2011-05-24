
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

TEST(FilterFactoryTests, getAndApplyDestionationIpFilterTo802_3Line)
{
    FilterFactory filterFactory;
    DestinationIp destinationIpExpected(LineExamples::destinationIpLine802_3);
    auto_ptr<DestinationIpFilter> destinationIpFilter(filterFactory.getDestinationIpFilter(LineExamples::line802_3));
    DestinationIp destinationIp(destinationIpFilter->apply(LineExamples::line802_3));

    EXPECT_TRUE(destinationIpExpected == destinationIp);
}

TEST(FilterFactoryTests, getAndApplyDestionationPortFilterWithDefaultLine)
{
    FilterFactory filterFactory;
    DestinationPort destinationPortExpected(LineExamples::destinationPortLine);
    auto_ptr<DestinationPortFilter> destinationPortFilter(filterFactory.getDestinationPortFilter(LineExamples::line));
    DestinationPort destinationPort(destinationPortFilter->apply(LineExamples::line));

    EXPECT_TRUE(destinationPortExpected == destinationPort);
}

TEST(FilterFactoryTests, getAndApplyDestionationPortFilterLineWith2CharactersLenght)
{
    FilterFactory filterFactory;
    DestinationPort destinationPortExpected(LineExamples::destinationPortLineWith2CharactersLenght);
    auto_ptr<DestinationPortFilter> destinationPortFilter(filterFactory.getDestinationPortFilter(LineExamples::lineWith2CharactersLenght));
    DestinationPort destinationPort(destinationPortFilter->apply(LineExamples::lineWith2CharactersLenght));

    EXPECT_TRUE(destinationPortExpected == destinationPort);
}

TEST(FilterFactoryTests, getAndApplyDestionationPortFilterLineWith3CharactersLenght)
{
    FilterFactory filterFactory;
    DestinationPort destinationPortExpected(LineExamples::destinationPortLineWith3CharactersLenght);
    auto_ptr<DestinationPortFilter> destinationPortFilter(filterFactory.getDestinationPortFilter(LineExamples::lineWith3CharactersLenght));
    DestinationPort destinationPort(destinationPortFilter->apply(LineExamples::lineWith3CharactersLenght));

    EXPECT_TRUE(destinationPortExpected == destinationPort);
}

TEST(FilterFactoryTests, getAndApplyDestionationPortFilterLineWith4CharactersLenght)
{
    FilterFactory filterFactory;
    DestinationPort destinationPortExpected(LineExamples::destinationPortLineWith4CharactersLenght);
    auto_ptr<DestinationPortFilter> destinationPortFilter(filterFactory.getDestinationPortFilter(LineExamples::lineWith4CharactersLenght));
    DestinationPort destinationPort(destinationPortFilter->apply(LineExamples::lineWith4CharactersLenght));

    EXPECT_TRUE(destinationPortExpected == destinationPort);
}

TEST(FilterFactoryTests, getAndApplyDestionationPortFilterWithIcmpUnreacheableLine)
{
    FilterFactory filterFactory;
    DestinationPort destinationPortExpected(LineExamples::destinationPortLineIcmpUnreacheable);
    auto_ptr<DestinationPortFilter> destinationPortFilter(filterFactory.getDestinationPortFilter(LineExamples::lineIcmpUnreacheable));
    DestinationPort destinationPort(destinationPortFilter->apply(LineExamples::lineIcmpUnreacheable));

    EXPECT_TRUE(destinationPortExpected == destinationPort);
}

TEST(FilterFactoryTests, getAndApplyDestionationPortFilterWith802_3Line)
{
    FilterFactory filterFactory;
    DestinationPort destinationPortExpected(LineExamples::destinationPortLine802_3);
    auto_ptr<DestinationPortFilter> destinationPortFilter(filterFactory.getDestinationPortFilter(LineExamples::line802_3));
    DestinationPort destinationPort(destinationPortFilter->apply(LineExamples::line802_3));

    EXPECT_TRUE(destinationPortExpected == destinationPort);
}

TEST(FilterFactoryTests, getAndApplySourceIpFilterWithDefaultLine)
{
    FilterFactory filterFactory;
    SourceIp sourceIpExpected(LineExamples::sourceIpLine);
    auto_ptr<SourceIpFilter> sourceIpFilter(filterFactory.getSourceIpFilter(LineExamples::line));
    SourceIp sourceIp(sourceIpFilter->apply(LineExamples::line));


    EXPECT_TRUE(sourceIpExpected == sourceIp);
}

TEST(FilterFactoryTests, getAndApplySourceIpFilterLineWith2CharactersLenght)
{
    FilterFactory filterFactory;
    SourceIp sourceIpExpected(LineExamples::sourceIpLineWith2CharactersLenght);
    auto_ptr<SourceIpFilter> sourceIpFilter(filterFactory.getSourceIpFilter(LineExamples::lineWith2CharactersLenght));
    SourceIp sourceIp(sourceIpFilter->apply(LineExamples::lineWith2CharactersLenght));

    EXPECT_TRUE(sourceIpExpected == sourceIp);
}

TEST(FilterFactoryTests, getAndApplySourceIpFilterLineWith3CharactersLenght)
{
    FilterFactory filterFactory;
    SourceIp sourceIpExpected(LineExamples::sourceIpLineWith3CharactersLenght);
    auto_ptr<SourceIpFilter> sourceIpFilter(filterFactory.getSourceIpFilter(LineExamples::lineWith3CharactersLenght));
    SourceIp sourceIp(sourceIpFilter->apply(LineExamples::lineWith3CharactersLenght));

    EXPECT_TRUE(sourceIpExpected == sourceIp);
}

TEST(FilterFactoryTests, getAndApplySourceIpFilterLineWith4CharactersLenght)
{
    FilterFactory filterFactory;
    SourceIp sourceIpExpected(LineExamples::sourceIpLineWith4CharactersLenght);
    auto_ptr<SourceIpFilter> sourceIpFilter(filterFactory.getSourceIpFilter(LineExamples::lineWith4CharactersLenght));
    SourceIp sourceIp(sourceIpFilter->apply(LineExamples::lineWith4CharactersLenght));

    EXPECT_TRUE(sourceIpExpected == sourceIp);
}

TEST(FilterFactoryTests, getAndApplySourceIpFilterWithIcmpUnreacheableLine)
{
    FilterFactory filterFactory;
    SourceIp sourceIpExpected(LineExamples::sourceIpLineIcmpUnreacheable);
    auto_ptr<SourceIpFilter> sourceIpFilter(filterFactory.getSourceIpFilter(LineExamples::lineIcmpUnreacheable));
    SourceIp sourceIp(sourceIpFilter->apply(LineExamples::lineIcmpUnreacheable));

    EXPECT_TRUE(sourceIpExpected == sourceIp);
}

TEST(FilterFactoryTests, getAndApplySourceIpFilterWith802_3Line)
{
    FilterFactory filterFactory;
    SourceIp sourceIpExpected(LineExamples::sourceIpLine802_3);
    auto_ptr<SourceIpFilter> sourceIpFilter(filterFactory.getSourceIpFilter(LineExamples::line802_3));
    SourceIp sourceIp(sourceIpFilter->apply(LineExamples::line802_3));

    EXPECT_TRUE(sourceIpExpected == sourceIp);
}

TEST(FilterFactoryTests, getAndApplySourcePortFilterWithDefaultLine)
{
    FilterFactory filterFactory;
    SourcePort sourcePortExpected(LineExamples::sourcePortLine);
    auto_ptr<SourcePortFilter> sourcePortFilter(filterFactory.getSourcePortFilter(LineExamples::line));
    SourcePort sourcePort(sourcePortFilter->apply(LineExamples::line));

    EXPECT_TRUE(sourcePortExpected == sourcePort);
}

TEST(FilterFactoryTests, getAndApplySourcePortFilterLineWith2CharactersLenght)
{
    FilterFactory filterFactory;
    SourcePort sourcePortExpected(LineExamples::sourcePortLineWith2CharactersLenght);
    auto_ptr<SourcePortFilter> sourcePortFilter(filterFactory.getSourcePortFilter(LineExamples::lineWith2CharactersLenght));
    SourcePort sourcePort(sourcePortFilter->apply(LineExamples::lineWith2CharactersLenght));

    EXPECT_TRUE(sourcePortExpected == sourcePort);
}

TEST(FilterFactoryTests, getAndApplySourcePortFilterLineWith3CharactersLenght)
{
    FilterFactory filterFactory;
    SourcePort sourcePortExpected(LineExamples::sourcePortLineWith3CharactersLenght);
    auto_ptr<SourcePortFilter> sourcePortFilter(filterFactory.getSourcePortFilter(LineExamples::lineWith3CharactersLenght));
    SourcePort sourcePort(sourcePortFilter->apply(LineExamples::lineWith3CharactersLenght));

    EXPECT_TRUE(sourcePortExpected == sourcePort);
}

TEST(FilterFactoryTests, getAndApplySourcePortFilterLineWith4CharactersLenght)
{
    FilterFactory filterFactory;
    SourcePort sourcePortExpected(LineExamples::sourcePortLineWith4CharactersLenght);
    auto_ptr<SourcePortFilter> sourcePortFilter(filterFactory.getSourcePortFilter(LineExamples::lineWith4CharactersLenght));
    SourcePort sourcePort(sourcePortFilter->apply(LineExamples::lineWith4CharactersLenght));

    EXPECT_TRUE(sourcePortExpected == sourcePort);
}

TEST(FilterFactoryTests, getAndApplySourcePortFilterWithIcmpUnreacheableLine)
{
    FilterFactory filterFactory;
    SourcePort sourcePortExpected(LineExamples::sourcePortLineIcmpUnreacheable);
    auto_ptr<SourcePortFilter> sourcePortFilter(filterFactory.getSourcePortFilter(LineExamples::lineIcmpUnreacheable));
    SourcePort sourcePort(sourcePortFilter->apply(LineExamples::lineIcmpUnreacheable));

    EXPECT_TRUE(sourcePortExpected == sourcePort);
}

TEST(FilterFactoryTests, getAndApplySourcePortFilterWith802_3Line)
{
    FilterFactory filterFactory;
    SourcePort sourcePortExpected(LineExamples::sourcePortLine802_3);
    auto_ptr<SourcePortFilter> sourcePortFilter(filterFactory.getSourcePortFilter(LineExamples::line802_3));
    SourcePort sourcePort(sourcePortFilter->apply(LineExamples::line802_3));

    EXPECT_TRUE(sourcePortExpected == sourcePort);
}



