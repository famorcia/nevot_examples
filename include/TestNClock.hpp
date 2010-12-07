#ifndef TESTNCLOCK_HPP
#define TESTNCLOCK_HPP

#include <cppunit/extensions/HelperMacros.h>

class TestNClock : public CppUnit::TestFixture
{
public:
    TestNClock(void);
    ~TestNClock(void);
    void setUp();
    void tearDown();

    CPPUNIT_TEST_SUITE( TestNClock );
        CPPUNIT_TEST( test_current_time );
    CPPUNIT_TEST_SUITE_END();
    void test_current_time();
};

#endif //TESTNCLOCK_HPP
