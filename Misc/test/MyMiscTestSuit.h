// MyMiscTestSuit.h
#include <cxxtest/TestSuite.h>
#include "Sieve.h"

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
  
};
