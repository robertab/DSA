#ifndef LINKEDLIST_H
#define LINKEDLIST_H

class Node {
  Node *next;
  int val;
public:
  Node(const int &val) {
    this->val = val;
    this->next = nullptr;
  };
  void addElement(const int &valToBeInserted);
  void removeElement(const int &valToBeRemoved);
  const int getVal() const { return this->val; }
  bool search(const int &valToBeFound);
};

// typedef struct Node Node;

// typedef struct LinkedList LinkedList;

// struct Node {
//   int val;
//   struct Node* next;
// };

// // Contains only the pointer to the first node.
// struct LinkedList {
//   struct Node* first;
// };

// void addElement(LinkedList *&L, const int val);
// void deleteElement(LinkedList *&L);
// const int head(LinkedList *&L);

#endif
