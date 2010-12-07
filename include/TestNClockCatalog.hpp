#ifndef TESTNCLOCKCATALOG_HPP
#define TESTNCLOCKCATALOG_HPP

#include <cppunit/extensions/HelperMacros.h>
#include "nevot/NUnknownEntry.hpp"

class TestNClockCatalog : public CppUnit::TestFixture
{
public:
    TestNClockCatalog(void);
    ~TestNClockCatalog(void);
    void setUp();
    void tearDown();

    CPPUNIT_TEST_SUITE( TestNClockCatalog );
        CPPUNIT_TEST_EXCEPTION( test_wrong_entry_in_catalog, nevot::NUnknownEntry );
        CPPUNIT_TEST( test_iterator);
    CPPUNIT_TEST_SUITE_END();

    void test_wrong_entry_in_catalog();
    void test_iterator();
};


#endif // TESTNCLOCKCATALOG_HPP