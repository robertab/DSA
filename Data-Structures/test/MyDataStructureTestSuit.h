// MyMiscTestSuit.h
#include <cxxtest/TestSuite.h>
#include "Queue.h"
#include "LinkedList.h"

class MyMiscTestSuit : public CxxTest::TestSuite
{
  LinkedList *L = new LinkedList;
 public:

  void setUp() {
    for(int i=0; i<10; ++i) {
      addElement(L, i);
    }
  }

  void tearDown() {
    delete L;
  }
  
  void testAddition(void) {
    TS_ASSERT(1 + 1 > 1);
    TS_ASSERT_EQUALS(1 + 1, 2);
  }
  void testMultiplication(void) {
    TS_ASSERT_EQUALS(2 * 1, 2);
  }
  void testInsertLinkedList(void) {
    TS_ASSERT_EQUALS(L->first->val, 9);
  }
  
};
