// MyMiscTestSuit.h
#include <cxxtest/TestSuite.h>
//#include "Queue.h"
//#include "LinkedList.h"
#include "Stack.h"

class MyMiscTestSuit : public CxxTest::TestSuite
{
 public:
  void testToExtractMinFromStack(void) {
    Stack *S = new Stack;
    S->top = nullptr;
    S->currMin = nullptr;
    S->prevMin = nullptr;
    S->size = 0;
    push(S, 7);
    push(S, 3);
    push(S, 8);
    push(S, 2);
    TS_ASSERT_EQUALS(min(S), 3);
  }
};
