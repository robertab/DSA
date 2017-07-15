#ifndef LINKEDLIST_H
#define LINKEDLIST_H

typedef struct Node Node;

typedef struct LinkedList LinkedList;

struct Node {
  int val;
  struct Node* next;
};

// Contains only the pointer to the first node.
struct LinkedList {
  struct Node* first;
};

void addElement(LinkedList *&L, const int val);
void deleteElement(LinkedList *&L);
const int head(LinkedList *&L);

#endif
