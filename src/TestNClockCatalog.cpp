#include "TestNClockCatalog.hpp"
#include <Foundation/commonsvcs/nevot/NClockCatalog.hpp>

using namespace Cdmw::CommonSvcs;

CPPUNIT_TEST_SUITE_REGISTRATION( TestNClockCatalog );


TestNClockCatalog::TestNClockCatalog(void)
{
}


TestNClockCatalog::~TestNClockCatalog(void)
{
}

void TestNClockCatalog::setUp()
{
}

void TestNClockCatalog::tearDown()
{
}


void TestNClockCatalog::test_wrong_entry_in_catalog()
{
    // 1 line of initialization
    nevot::NClockCatalog::NClockEntries entry = nevot::NClockCatalog::get_entry("Not available entry!");
    nevot::NTimeBase::TimeT local_time = entry.second->current_time();
}


    void TestNClockCatalog::test_iterator();
