#ifndef DISTRIBUTIONSORT_H
#define DISTRIBUTIONSORT_H

#include "insertionSort.h"

template<typename V>
void distributionSort(V array) {
  const int n = array.size();
  V bucket[n];
  for(int i=0; i<n; i++) {
    int bucketidx = n*array[i];
    bucket[bucketidx].push_back(array[i]);
  }
}    


#endif
