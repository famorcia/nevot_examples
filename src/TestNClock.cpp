#include "TestNClock.hpp"
#include "nevot/NSystemClock.hpp"

CPPUNIT_TEST_SUITE_REGISTRATION( TestNClock );

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
    nevot::NTimeBase::NTimeT value = nevot::NSystemClock::current_time();
    CPPUNIT_ASSERT(value!=0);
}
