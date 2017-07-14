/*
File: Queue.cpp
Author: Robert Siwerz

Content: Simple api for the Queue data structure.
         Created by using C-structs and pointers.
         Mostly for educational purpose and making
         myself comfortable with pointers etc.
*/

#include <iostream>
#include "Queue.h"

struct Node {
  int val;
  Node *next;
};

struct Queue {
  Node *head;
  Node *tail;
  unsigned int size;
};

const int size(Queue *&Q) {
  return Q->size;
}

int isEmpty(Queue *&Q) {
  return Q->head == NULL;
}

// inserting a new element at the back of the queue in O(1)
void enqueue(Queue *&Q, const int val) {
  Node *tmp = new Node;
  tmp->val = val;
  tmp->next = NULL;
  if (Q->head == NULL) {
    Q->head = tmp;
  }
  else {
    Q->tail->next = tmp;
  }
  Q->tail = tmp;
  Q->size++;
  return;
}
// removing the first element of the queue in O(1)
const int dequeue(Queue *&Q) {
  if(Q->head == NULL) {
    std::cout << "The queue is empty!\n";
    return -1;
  }
  else {
    Node *tmp;
    tmp = Q->head;
    const int val = tmp->val;
    Q->head = Q->head->next;
    delete tmp;
    Q->size--;    
    return val;
  }
}

// Allocating a new queue on the heap and returning
// a ptr to that address.
Queue *newQueue() {
  Queue *Q = new Queue;
  Q->head = NULL; Q->tail = NULL;
  Q->size = 0;
}
