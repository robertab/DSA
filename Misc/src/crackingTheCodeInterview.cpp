#include <iostream>
#include <string>
#include <algorithm>
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

void removeDuplicates(std::string& word) {
  int len = word.length();
  int S = 0;
  for(int i=0; i<len; ++i) {
    int currentChar = (int)word[i] - 96;
    if(S & (1 << currentChar)) {
      word.erase(word.begin()+i);
      i--; len--; // Hack?
    }
    S |= (1 << currentChar);
  }
}

bool isAnagram(std::string& word) {
  std::string reversedWord = word;
  std::reverse(reversedWord.begin(), reversedWord.end());
  return word == reversedWord;
}

void replaceSpaces(std::string& word) {
  // Current length of the word
  int len = word.length();
  // #spaces and the possibly new length of the word
  int spaces = 0; int newLen = 0;
  for(char c : word) { if(c == ' ') spaces++; }
  newLen = len + spaces*2;
  word.resize(len + spaces*2);
  word[newLen] = '\0';
  //TODO: RESIZE??
  // Traverse the original word from the end
  for(int i=len-1; i>=0; i--) {
    if(word[i] == ' ') {
      word[newLen - 1] = '0';
      word[newLen - 2] = '2';
      word[newLen - 3] = '%';
      newLen -= 3;
    }
    else {
      word[newLen-1] = word[i];
      newLen-=1;
    }
  }
}    
