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
#include "/home/tribulate/Projekt/DSA/Algorithms/test/MyMiscTestSuit.h"

static MyMiscTestSuit suite_MyMiscTestSuit;

static CxxTest::List Tests_MyMiscTestSuit = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_MyMiscTestSuit( "test/MyMiscTestSuit.h", 5, "MyMiscTestSuit", suite_MyMiscTestSuit, Tests_MyMiscTestSuit );

static class TestDescription_suite_MyMiscTestSuit_testAddition : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyMiscTestSuit_testAddition() : CxxTest::RealTestDescription( Tests_MyMiscTestSuit, suiteDescription_MyMiscTestSuit, 8, "testAddition" ) {}
 void runTest() { suite_MyMiscTestSuit.testAddition(); }
} testDescription_suite_MyMiscTestSuit_testAddition;

static class TestDescription_suite_MyMiscTestSuit_testMultiplication : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyMiscTestSuit_testMultiplication() : CxxTest::RealTestDescription( Tests_MyMiscTestSuit, suiteDescription_MyMiscTestSuit, 12, "testMultiplication" ) {}
 void runTest() { suite_MyMiscTestSuit.testMultiplication(); }
} testDescription_suite_MyMiscTestSuit_testMultiplication;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
