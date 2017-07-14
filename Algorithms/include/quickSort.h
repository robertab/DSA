#ifndef QUICKSORT_H
#define QUICKSORT_H

#include <iostream>


/* template<typename Iterator> */
/* Iterator partition(Iterator beg, Iterator end) { */
/*   Iterator pivot = end-1; */
/*   Iterator leftWall = beg; */
/*   for(Iterator i = beg; i < end; i++) { */
/*     if(*i < *pivot) { */
/*       std::swap(*i, *leftWall); */
/*       leftWall++; */
/*     } */
/*   } */
/*   std::swap(*pivot, *leftWall); */
/*   return leftWall; */
/* } */

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



#endif
