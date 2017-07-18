#include <iostream>

template <typename Iterator>
void insertionSort(Iterator beg, Iterator end) {
  Iterator j, i, it;
  for(j=beg+1; j<end; j++) {
    i = (j - 1);
    it = j;
    while(i >= beg && *i>*it) {
      std::swap(*i, *it);
      i--;
      it--;
    }                                           \
  }
}
