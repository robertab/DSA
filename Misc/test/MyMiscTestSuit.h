// MyMiscTestSuit.h
#include <cxxtest/TestSuite.h>
#include <string>
#include <iostream>
#include "Sieve.h"
#include "crackingTheCodeInterview.h"

class MyMiscTestSuit : public CxxTest::TestSuite
{
 public:
  void testAddition(void) {
    TS_ASSERT(1 + 1 > 1);
    TS_ASSERT_EQUALS(1 + 1, 2);
  }
  void testMultiplication(void) {
    TS_ASSERT_EQUALS(2 * 1, 2);
  }
  void testIsPrime(void) {
    TS_ASSERT_EQUALS(isPrime(29), true);
  }
  void testIfNoDuplicateCharInWord(void) {
    std::string w1 = "abcd";
    std::string w2 = "aa";
    TS_ASSERT_EQUALS(hasAllUniqueCharRev(w2), false);
    TS_ASSERT_EQUALS(hasAllUniqueCharRev(w1), true);    
  }
  void testIfReversedString(void) {
    char *w1 = "a";
    char *w2 = "abcd";
    reverseString(w1);
    reverseString(w2);
    TS_ASSERT_EQUALS(w1, w1);
    TS_ASSERT_EQUALS(w2, "dcba");
  }
};
