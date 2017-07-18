#include <string>
#include <iostream> // debugging
#include <algorithm>

const int optimumEditDistance(std::string w1, std::string w2) {
  int w1len = w1.length();
  int w2len = w2.length();

  int A[w1len][w2len];

  for(int i=0; i<w1len; i++) {
    A[i][0] = i;
  }
  for(int j=0; j<w2len; j++) {
    A[0][j] = j;
  }
  for(int i=1; i<w1len; i++) {
    for(int j=1; j<w2len; j++) {
      int cost = w1[i]==w2[j] ? 0 : 1;
      A[i][j] = std::min(std::min(cost + A[i-1][j-1], 1 + A[i-1][j]), 1 + A[i][j-1]);
    }
  }
  return A[w1len-1][w2len-1];
}
