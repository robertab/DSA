#include <iostream>
#include "binarySearch.h"
#include "quickSort.h"
#include "mergeSort.h"
#include "insertionSort.h"
#include "distributionSort.h"
#include <vector>

using namespace std;

int main() {
  vector<int> array(7);
  array = {5,2,4,6,1,3,7};

  // Sort the array
  quickSort(array.begin(), array.end());
  // Search the element
  cout << *(binarySearch(array.begin(), array.end(), 7)) << endl;;
  // Printing the, hopefully, printed array
  for(auto e : array) {
    cout << e << " ";
  }
  cout << endl;
  return 0;
}


