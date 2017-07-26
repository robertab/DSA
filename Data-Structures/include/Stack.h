#ifndef STACK_H
#define STACK_H

typedef struct Node Node;
typedef struct Stack Stack;


struct Node {
  int val;
  Node *next;
};

struct Stack {
  Node *top;
  Node *currMin;
  Node *prevMin;
  int size;
};

const int pop(Stack *&S);
void push(Stack *&S, const int &val);
const int size(Stack *&S);
const int min(Stack *&S);

#endif
