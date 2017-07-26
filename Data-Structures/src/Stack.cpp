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
#include "Stack.h"

const int size(Stack *&S) {
  return S->size;
}
const int min(Stack *&S) {
  return S->currMin->val;
}

void push(Stack *&S, const int &val) {
  Node *tmp = new Node;
  tmp->val = val;
  if (S->top == NULL) {
    tmp->next = NULL;
    S->currMin = tmp;
    S->prevMin = tmp;
  }
  else {
    tmp->next = S->top;
    if (val < S->currMin->val) {
      S->prevMin = S->currMin;
      S->currMin = tmp;
    }
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
    // TODO: How to keep a reference to the min element.
    if(val == S->currMin->val) {
      S->currMin = S->prevMin;
    }
    tmp = S->top;
    S->top = S->top->next;
    delete tmp;
    S->size--;    
    return val;
  }
}
