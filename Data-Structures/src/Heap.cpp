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

Heap* newHeap(const int N) {
  Heap* new_heap = new Heap;
  new_heap->size = 0;
  new_heap->keys = new int[15];
  for(int i=0; i<N; i++)
    new_heap->keys[i] = 0;
  return new_heap;
}

void insert(Heap *&H, const int key) {
   H->keys[H->size] = key;
   heapifyUp(H, H->size);
   H->size++;
}

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

void deleteFromHeap(Heap *&H)  {
  H->keys[0] = H->keys[H->size-1];
  H->size--;
  heapifyDown(H, 0);
}

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


int main () {
  Heap *H = newHeap(15);
  int array[15] = {1,2,5,10,3,7,11,15,17,20,9,15,8,16, 2};
  for(int el : array) {
    insert(H, el);
  }
  for(int i=0; i<H->size; i++)
    cout << H->keys[i] << endl;

  return 0;
}
