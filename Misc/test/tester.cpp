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
#include "/home/tribulate/Projekt/DSA/Misc/test/MyMiscTestSuit.h"

static MyMiscTestSuit suite_MyMiscTestSuit;

static CxxTest::List Tests_MyMiscTestSuit = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_MyMiscTestSuit( "test/MyMiscTestSuit.h", 8, "MyMiscTestSuit", suite_MyMiscTestSuit, Tests_MyMiscTestSuit );

static class TestDescription_suite_MyMiscTestSuit_testAddition : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyMiscTestSuit_testAddition() : CxxTest::RealTestDescription( Tests_MyMiscTestSuit, suiteDescription_MyMiscTestSuit, 11, "testAddition" ) {}
 void runTest() { suite_MyMiscTestSuit.testAddition(); }
} testDescription_suite_MyMiscTestSuit_testAddition;

static class TestDescription_suite_MyMiscTestSuit_testMultiplication : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyMiscTestSuit_testMultiplication() : CxxTest::RealTestDescription( Tests_MyMiscTestSuit, suiteDescription_MyMiscTestSuit, 15, "testMultiplication" ) {}
 void runTest() { suite_MyMiscTestSuit.testMultiplication(); }
} testDescription_suite_MyMiscTestSuit_testMultiplication;

static class TestDescription_suite_MyMiscTestSuit_testIsPrime : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyMiscTestSuit_testIsPrime() : CxxTest::RealTestDescription( Tests_MyMiscTestSuit, suiteDescription_MyMiscTestSuit, 18, "testIsPrime" ) {}
 void runTest() { suite_MyMiscTestSuit.testIsPrime(); }
} testDescription_suite_MyMiscTestSuit_testIsPrime;

static class TestDescription_suite_MyMiscTestSuit_testIfNoDuplicateCharInWord : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyMiscTestSuit_testIfNoDuplicateCharInWord() : CxxTest::RealTestDescription( Tests_MyMiscTestSuit, suiteDescription_MyMiscTestSuit, 21, "testIfNoDuplicateCharInWord" ) {}
 void runTest() { suite_MyMiscTestSuit.testIfNoDuplicateCharInWord(); }
} testDescription_suite_MyMiscTestSuit_testIfNoDuplicateCharInWord;

static class TestDescription_suite_MyMiscTestSuit_testIfReversedString : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyMiscTestSuit_testIfReversedString() : CxxTest::RealTestDescription( Tests_MyMiscTestSuit, suiteDescription_MyMiscTestSuit, 27, "testIfReversedString" ) {}
 void runTest() { suite_MyMiscTestSuit.testIfReversedString(); }
} testDescription_suite_MyMiscTestSuit_testIfReversedString;

static class TestDescription_suite_MyMiscTestSuit_testToRemoveDuplicates : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyMiscTestSuit_testToRemoveDuplicates() : CxxTest::RealTestDescription( Tests_MyMiscTestSuit, suiteDescription_MyMiscTestSuit, 32, "testToRemoveDuplicates" ) {}
 void runTest() { suite_MyMiscTestSuit.testToRemoveDuplicates(); }
} testDescription_suite_MyMiscTestSuit_testToRemoveDuplicates;

static class TestDescription_suite_MyMiscTestSuit_testIfAnagram : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyMiscTestSuit_testIfAnagram() : CxxTest::RealTestDescription( Tests_MyMiscTestSuit, suiteDescription_MyMiscTestSuit, 37, "testIfAnagram" ) {}
 void runTest() { suite_MyMiscTestSuit.testIfAnagram(); }
} testDescription_suite_MyMiscTestSuit_testIfAnagram;

static class TestDescription_suite_MyMiscTestSuit_testReplaceWithAnotherChar : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyMiscTestSuit_testReplaceWithAnotherChar() : CxxTest::RealTestDescription( Tests_MyMiscTestSuit, suiteDescription_MyMiscTestSuit, 43, "testReplaceWithAnotherChar" ) {}
 void runTest() { suite_MyMiscTestSuit.testReplaceWithAnotherChar(); }
} testDescription_suite_MyMiscTestSuit_testReplaceWithAnotherChar;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
