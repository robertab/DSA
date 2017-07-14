#ifndef MERGESORT_HPP
#define MERGESORT_HPP

#include <cmath>

template<typename T, typename Iterator>
void merge(T &array, T &L, T &R) {
  Iterator a = array.begin();
  Iterator l = L.begin();
  Iterator r = R.begin();
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

template<typename T>
void mergeSort(T &array) {
  if(array.size() == 1) return;
  else {
    const unsigned int len = array.size();

    const int hi = ceil((double)len/2);
    const int lo = hi - 1;
    T L(&array[0], &array[lo]);
    T R(&array[lo], &array[len]);

    mergeSort(L);
    mergeSort(R);
    merge(array, L, R);
  }
  return;
}


#endif
