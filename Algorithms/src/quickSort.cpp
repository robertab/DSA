#include <iostream>
#include <vector>

template<typename Iterator>
Iterator partition(Iterator beg, Iterator end) {
  Iterator pivot = beg;
  Iterator leftWall = beg;
  for(Iterator i = (beg+1); i < end; i++) {
    if(*i < *pivot) {
      leftWall++;
      std::swap(*i, *leftWall);
    }
  }
  std::swap(*beg, *leftWall);
  return leftWall;
}

template<typename Iterator>
void quickSort(Iterator beg, Iterator end) {
  Iterator pivot;
  if (beg < end) {
    pivot = partition(beg, end);
    quickSort(beg, pivot);
    quickSort(pivot+1, end);
  }
}

