#ifndef QUICKSORT_H
#define QUICKSORT_H


template<typename Iterator>
Iterator partition(Iterator beg, Iterator end); 

template<typename Iterator>
void quickSort(Iterator beg, Iterator end);

#include "../src/quickSort.cpp"



#endif
