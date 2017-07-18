// MyAlgortithmTestSuit.h
#include <cxxtest/TestSuite.h>
#include <vector>
#include <iostream>

#include "insertionSort.h"
#include "quickSort.h"
#include "mergeSort.h"

using namespace std;


class MyAlgorithmTestSuit : public CxxTest::TestSuite
{
  vector<int> arrayToBeSorted;
  vector<int> sortedArray; 
 public:
  void setUp() {
    arrayToBeSorted.resize(6);
    sortedArray.resize(6);
    arrayToBeSorted = {5,2,4,6,1,3};
    sortedArray = {1,2,3,4,5,6};
  }
  void tearDown() {
  }
  void testAddTwoNumbers(void) {
    TS_ASSERT_EQUALS(2+2, 4);
  }

  void testSortingWithInsertionSort(void) {
    mergeSort(arrayToBeSorted);
    //quickSort(arrayToBeSorted.begin(), arrayToBeSorted.end());
    TS_ASSERT_EQUALS(arrayToBeSorted, sortedArray);
  }
  
};
