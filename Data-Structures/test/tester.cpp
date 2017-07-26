/* Generated file, do not edit */

#ifndef CXXTEST_RUNNING
#define CXXTEST_RUNNING
#endif

#define _CXXTEST_HAVE_STD
#include <cxxtest/TestListener.h>
#include <cxxtest/TestTracker.h>
#include <cxxtest/TestRunner.h>
#include <cxxtest/RealDescriptions.h>
#include <cxxtest/TestMain.h>
#include <cxxtest/ErrorPrinter.h>

int main( int argc, char *argv[] ) {
 int status;
    CxxTest::ErrorPrinter tmp;
    CxxTest::RealWorldDescription::_worldName = "cxxtest";
    status = CxxTest::Main< CxxTest::ErrorPrinter >( tmp, argc, argv );
    return status;
}
bool suite_MyMiscTestSuit_init = false;
#include "/home/tribulate/Projekt/DSA/Data-Structures/test/MyDataStructureTestSuit.h"

static MyMiscTestSuit suite_MyMiscTestSuit;

static CxxTest::List Tests_MyMiscTestSuit = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_MyMiscTestSuit( "test/MyDataStructureTestSuit.h", 7, "MyMiscTestSuit", suite_MyMiscTestSuit, Tests_MyMiscTestSuit );

static class TestDescription_suite_MyMiscTestSuit_testToExtractMinFromStack : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyMiscTestSuit_testToExtractMinFromStack() : CxxTest::RealTestDescription( Tests_MyMiscTestSuit, suiteDescription_MyMiscTestSuit, 10, "testToExtractMinFromStack" ) {}
 void runTest() { suite_MyMiscTestSuit.testToExtractMinFromStack(); }
} testDescription_suite_MyMiscTestSuit_testToExtractMinFromStack;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
