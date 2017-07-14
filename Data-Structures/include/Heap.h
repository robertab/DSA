#ifndef HEAP_H
#define HEAP_h

typedef struct Heap Heap;

const int leftChild(const int i);
const int rightChild(const int i);
const int parent(const int i);

Heap* newHeap(const int N);
void insert(Heap *&H, const int key);
void heapifyUp(Heap *&H, int i);
const int extractMin(Heap *&H);
void deleteFromHeap(Heap *&H);
void heapifyDown(Heap *&H, int i);

#endif 
