#include "Heap.h"
#include <iostream>
#include <math.h>
#include <vector>

using std::cout;
using std::endl;
using std::vector;
using std::distance;
using std::swap;

struct Heap {
  int size;
  int *keys;
};

const int leftChild(const int i) {
  return 2*i+1;
}
const int rightChild(const int i) {
  return 2*i+2;
}
const int parent(const int i) {
  return floor((double)(i-1)/2);
}
// Construct a new heap and return a pointer to it.
Heap* newHeap(const int &N) {
  Heap* new_heap = new Heap;
  new_heap->size = 0;
  new_heap->keys = new int[15];
  for(int i=0; i<N; i++)
    new_heap->keys[i] = 0;
  return new_heap;
}

// Insert a new element at the heap. And then call
// heapifyUp incase of restructuring
void insert(Heap *&H, const int key) {
   H->keys[H->size] = key;
   heapifyUp(H, H->size);
   H->size++;
}

// If the parent of the current idx
// is lower then move up the idx recursively
void heapifyUp(Heap *&H, int i) {
  if(i>0) {
    int j = parent(i);
    if(H->keys[i] < H->keys[j]) {
      swap(H->keys[i], H->keys[j]);
      heapifyUp(H, j);
    }
  }
  return;
}

const int extractMin(Heap *&H) {
  return H->keys[1];
}

// Delete the current min element from the heap
// and replace it with the last element of the heap
// and possibly exchange that element with the least of
// the children. This is also done recursively
void deleteFromHeap(Heap *&H)  {
  H->keys[0] = H->keys[H->size-1];
  H->size--;
  heapifyDown(H, 0);
}

// If the parent is larger than its children
// then swap with the least of them. This is
// done recursively.
void heapifyDown(Heap *&H, const int i) {
  int j;
  if (2*i > H->size-1)
    return;
  else if(2*i < H->size-1) {
    int left = leftChild(i);
    int right = rightChild(i);
    j = (H->keys[left] < H->keys[right]) ? left : right;
  }
  else if(2*i == H->size-1)
    j = 2*i;
  if(H->keys[j] < H->keys[i]) {
    swap(H->keys[j], H->keys[i]);
    heapifyDown(H, j);
  }
  return;
}
