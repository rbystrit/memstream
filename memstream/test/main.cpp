#include "allocator_test.h"
#include "membuf_test.h"
#include <cppunit/ui/text/TestRunner.h>

CPPUNIT_TEST_SUITE_REGISTRATION(rbystrit::memstream::AllocatorTest);
CPPUNIT_TEST_SUITE_REGISTRATION(rbystrit::memstream::MembufTest);

int main() {
    CppUnit::TextUi::TestRunner runner;
    CppUnit::TestFactoryRegistry &registry = CppUnit::TestFactoryRegistry::getRegistry();
    runner.addTest( registry.makeTest() );
    bool wasSuccessful = runner.run( "", false );
    return !wasSuccessful;
}