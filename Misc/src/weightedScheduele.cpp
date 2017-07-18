#include <iostream>
#include "weightedScheduele.h"

// macro or inline.....
#define max(X,Y) ((X) > (Y) ? (X) : (Y))

// Calculating the maximum sum of values given a certain interval

// The main idea: Either request j is in the optimal solution or it isn't
// If it isn't, then the optimal solution is in the interval {1,2, ... , j-1}
// if it is, then the optimal solution is also in the interval {1,2, ... , p(j)}
// where p(j) < j and any interval in between is not disjoint j.


// Recursive solution to the problem. The solution grows exponentially due
// to the amount of calls to the same values. This is a top down solution
// as we are starting from given interval j
const int computeOpt(const int j, int val[], int p[]) {
  if (j == 0) return 0;
  else return max(val[j] + computeOpt(p[j], val, p), computeOpt(j-1, val, p));
}


// Iterative approach. Same principle as the recursive solution, however
// storing each call in the array M. This is a bottom up solution as
// we are looping from the lower intervals and calculating the next one
// until we reach the end of the array which is n.
const int iterativeComputeOpt(const int n, int val[], int p[]) {
  int M[7]; //  = {0,0,0,0,0,0,0};
  M[0] = 0;
  for(int i = 1; i < 7; i++) {
    M[i] = max(val[i] + M[p[i]], M[i-1]);
  }
  return M[n];
}

  
