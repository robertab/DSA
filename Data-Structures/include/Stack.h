#ifndef STACK_H
#define STACK_H

typedef struct Node Node;
typedef struct Stack Stack;

const int pop(Stack *&S);
void push(Stack *&S, const int val);
const int size(Stack *&S);

#endif
