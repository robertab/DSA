/*

API for a singly linked list.

Insert: 
Insert an element e at the start @O(1) and inserting at the end @O(n)

Delete: O(n)
Delete the first element of the list @O(1) and deleting at the end @O(n)

*/

#include <iostream>
#include <cassert>
#include "LinkedList.h"

using std::cout;
using std::cin;
using std::endl;


// struct Node {
//   int val;
//   struct Node* next;
// };

// // Contains only the pointer to the first node.
// struct LinkedList {
//   struct Node* first;
// };

// Insert the new element at the start of the list
void addElement(LinkedList *&L, const int val) {
  Node *tmp = new Node;
  tmp->val = val;
  if (!L->first) {
    L->first = tmp;
    tmp->next = NULL;    
  }
  else {
    tmp->next = L->first;
    L->first = tmp;
  }
  return;
}

// Removes the last element of the list
void deleteElement(LinkedList *&L) {
  if (!L->first->next) {
    L->first = NULL;
    delete L->first;
  }
  else {
    Node *curr = L->first;
    Node *prev = new Node;
    while(curr->next) {
      prev = curr;
      curr = curr->next;
    }
    prev->next = NULL;
    delete curr;
  }
}

// returns the first item in the list
const int head(LinkedList *&L) {
  if (!L->first) {
    cout << "List is empty\n";
    return 0;
  }
  else {
    return L->first->val;    
  } 
}
