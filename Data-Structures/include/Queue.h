#ifndef QUEUE_H
#define QUEUE_H

typedef struct Node Node;
typedef struct Queue Queue;


const int dequeue(Queue *&Q);
void enqueue(Queue *&Q, const int val);
const int size(Queue *&Q);
int isEmpty(Queue *&Q);
Queue *newQueue();

#endif
