/*
File: Stack.cpp
Author: Robert Siwerz

Content: Simple api for the Stack data structure.
         Created by using C-structs and pointers.
         Mostly for educational purpose and making
         myself comfortable with pointers etc.
*/

#include <stdio.h>
#include <iostream>

struct Node {
  int val;
  Node *next;
};

struct Stack {
  Node *top;
  int size;
};

const int size(Stack *&S) {
  return S->size;
}

void push(Stack *&S, const int val) {
  Node *tmp = new Node;
  tmp->val = val;
  if (S->top == NULL) {
    tmp->next = NULL;
  }
  else {
    tmp->next = S->top;
  }
  S->top = tmp;  
  S->size++;
}

const int pop(Stack *&S) {
  if (S->top == NULL) {
    std::cout << "The stack is empty\n";
    return -1;
  }
  else {
    Node *tmp = new Node;
    const int val = S->top->val;
    tmp = S->top;
    S->top = S->top->next;
    delete tmp;
    S->size--;    
    return val;
  }
}
