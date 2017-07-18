#include <vector>
#include <cmath>

#include "mergeSort.h"

void mergeSort(std::vector<int> &array) {
  if(array.size() == 1) return;
  else {
    const unsigned int len = array.size();

    const int hi = ceil((double)len/2);
    const int lo = hi - 1;
    std::vector<int> L(&array[0], &array[lo]);
    std::vector<int> R(&array[lo], &array[len]);

    mergeSort(L);
    mergeSort(R);
    merge(array, L, R);
  }
}

void merge(std::vector<int> &array, std::vector<int> &L, std::vector<int> &R) {
  std::vector<int>::iterator a = array.begin();
  std::vector<int>::iterator l = L.begin();
  std::vector<int>::iterator r = R.begin();
  while(l != L.end() && r != R.end()) {
    if (*l <= *r) {
      *a = *l;
      l++;
    }
    else {
      *a = *r;
      r++;
    }
    a++;
  }
  while (l != L.end()) {
    *a = *l;
    a++;
    l++;
  }
  while (r != R.end()) {
    *a = *r;
    a++;
    r++;
  }
  return;
}


