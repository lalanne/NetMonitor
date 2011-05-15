
#include "LineExamples.hpp"

#include "TimeFilter.hpp"
#include "Time.hpp"

#include <gtest/gtest.h>
#include <string>

using namespace std;

TEST(TimeFilterTests, appliedFilterToIPv4Line)
{
    Time timeExpected("17:34:35.785128");
    TimeFilter filter;
    Time timeActual = filter(LineExamples::line);

    EXPECT_TRUE(timeExpected==timeActual);
}
