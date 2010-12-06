#include "TestNClock.hpp"
#include <Foundation/commonsvcs/nevot/NSystemClock.hpp>

CPPUNIT_TEST_SUITE_REGISTRATION( TestNClock );

using namespace Cdmw::CommonSvcs;

TestNClock::TestNClock(void)
{
}


TestNClock::~TestNClock(void)
{
}


void TestNClock::setUp()
{
}

void TestNClock::tearDown()
{
}

void TestNClock::test_current_time()
{
    nevot::NTimeBase::TimeT value = nevot::NSystemClock::current_time();
    CPPUNIT_ASSERT(value!=0);
}
