#ifndef INSERTIONSORT_H
#define INSERTIONSORT_H


template<typename Iterator>
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
    //    std::swap(*(i+1), *(j));
  }
}


/* void insertionSort(std::vector<int> &array) { */
/*   for(int j=1; j<array.size(); j++) { */
/*     int key = array[j]; // Current key to check */
/*     int i = j - 1; */
/*     while(i>=0 && array[i]>key) { */
/*       array[i+1] = array[i]; */
/*       i-=1; */
/*     } */
/*     array[i+1] = key; */
/*   } */
/*   return; */
/* } */

#endif
