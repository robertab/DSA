#ifndef COUNTINGSORT_H
#define COUNTINGSORT_H

template<typename T>
void countingSort(T &array) {
  const int n = 7;
  // Create a counting array consisting of n zeros
  T count(n+1);

  T output(n);

  // Modify count to store the count of each element
  for(int i=0; i<n; ++i) {
    ++count[array[i]];
  }

  for(int i=0; i<=n; ++i) {
    count[i] += count[i-1];
  }

  for(int i=0; i<n; i++) {
    output[count[array[i]]-1] = array[i];
    --count[array[i]];
  }

  for (int i=0; array[i]; ++i) {
    array[i] = output[i];
  }
  
  return;
}

#endif
