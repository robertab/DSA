#ifndef BINARYSEARCH_H
#define BINARYSEARCH_H

template<typename Iterator>
Iterator binarySearch(Iterator beg, Iterator end, const int k) {
  const int len = std::distance(beg, end);
  Iterator mid = beg + (len / 2);
  std::cout << "The middle is: " << *mid << std::endl;
  if (len > 1) {
    if (*mid == k) return mid;
    else if( *mid > k) return binarySearch(beg, mid, k);
    else return binarySearch(mid, end, k);
  }
  return beg;
}

#endif
