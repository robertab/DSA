#include <iostream>
#include <string>
#include <string.h> // memset
#include "crackingTheCodeInterview.h"


using std::string;
using std::cout;
using std::endl;
using std::swap;

// Checking wether the input string contains all unique characters
// by using an additional buffer.
bool hasAllUniqueChar(string word) {
  bool visited[256];
  memset(visited, 0, sizeof(visited));
  for(auto c : word) {
    if (visited[(int)c]) return false;
    visited[(int)c] = true;
  }
  return true;
}

// Same as above but without additional buffer.
// instead using a "bit set".
bool hasAllUniqueCharRev(std::string word) {
  int visited = 0;
  for(auto c : word) {
    int charToBeChecked = (int)c - 96; // Set lower case a to 1, b to 2 etc.
    //cout << charToBeChecked << endl;
    //    cout << (visited & charToBeChecked) << ", " << charToBeChecked << endl;
    if(visited & (1 << charToBeChecked)) return false;
    visited |= (1 << charToBeChecked);
  }
  return true;
}

void reverseString(char word[]) {
  char* beg = word-1;
  char* end = word + strlen(word);
  while(++beg < --end) {
    swap(*beg, *end);
  }
  // int c, i, j;
  // for(i = 0, j = len - 1; i<j; i++, j--) {
  //   c = word[i];
  //   word[i] = word[j];
  //   word[j] = c;
  // }


}





