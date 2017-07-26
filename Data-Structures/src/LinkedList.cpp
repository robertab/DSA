/*

API for a singly linked list.

Insert: 
Insert an element e at the start @O(1) and inserting at the end @O(n)

Delete: O(n)
Delete the first element of the list @O(1) and deleting at the end @O(n)

*/

#include <iostream>
#include "LinkedList.h"

using std::cout;
using std::cin;
using std::endl;

// Add a new element at the end of the list O(n)
void Node::addElement(const int &valToBeInserted) {
  Node *tmp = new Node(valToBeInserted);
  Node *n = this;
  while(n->next) { n = n->next; }
  n->next = tmp;
}

// Remove the chosen element from the list. Worst case O(n)
void Node::removeElement(const int &valToBeRemoved) {
  Node *n = this;
  Node *pred = this; 
  while(n) {
    if(n->getVal() == valToBeRemoved) {
      pred->next = n->next;
      n = nullptr;
      delete n;
    }
    else {
      pred = n;
      n = n->next;
    }
  }
}

// Search for the chosen element in the list. O(n)
bool Node::search(const int &val) {
  Node *n = this;
  while(n) {
    if(n->getVal() == val) return true;
    else n = n->next;
  }
  return false;
}

// struct Node {
//   int val;
//   struct Node* next;
// };

// // Contains only the pointer to the first node.
// struct LinkedList {
//   struct Node* first;
// };

// Insert the new element at the start of the list
// void addElement(LinkedList *&L, const int val) {
//   Node *tmp = new Node;
//   tmp->val = val;
//   if (!L->first) {
//     L->first = tmp;
//     tmp->next = NULL;    
//   }
//   else {
//     tmp->next = L->first;
//     L->first = tmp;
//   }
//   return;
// }

// // Removes the last element of the list
// void deleteElement(LinkedList *&L) {
//   if (!L->first->next) {
//     L->first = NULL;
//     delete L->first;
//   }
//   else {
//     Node *curr = L->first;
//     Node *prev = new Node;
//     while(curr->next) {
//       prev = curr;
//       curr = curr->next;
//     }
//     prev->next = NULL;
//     delete curr;
//   }
// }

// // returns the first item in the list
// const int head(LinkedList *&L) {
//   if (!L->first) {
//     cout << "List is empty\n";
//     return 0;
//   }
//   else {
//     return L->first->val;    
//   } 
// }
