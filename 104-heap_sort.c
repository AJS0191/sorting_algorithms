#include "sort.h"
#include <stdio.h>
/**
 * maxHeapify- swaps elements in an array till parent is max.
 * @array: the array to be heap.
 * @index: identifies original parent
 * @size: printable size
 * Return: VOID
 **/

void maxHeapify(int *array, size_t index, size_t size) {
  int lc = ((index) * 2);
  int rc = ((index) * 2) + 1;
  int com;
  int temp;

  if (array[lc] > array[rc]) {
    com = lc;
      } else {
    com = rc;
      }
  if (array[com] > array[index]) {
    temp = array[com];
    array[com] = array[index];
    array[index] = temp;
    print_array(array, size);
  };
}
	 
/**
 * makeMaxHeap- makes an array a binary max heap.
 * @array: the array to be heap.
 * @len: identifies last unsorted element
 * @size: printable size
 * Return: VOID
 **/

void makeMaxHeap(int *array, size_t len, size_t size)
{
  size_t index = len/2;
  int i = 0;
  int j = index;
  for (i = index; i > 0; i--, j--) {
    maxHeapify(array, j - 1, size);
  }
}

/**
 * heap_sort- Sorts array in heaps.
 * @array: the array to be sorted.
 * @size: size of given array
 * Return: VOID
 **/

void heap_sort(int *array, size_t size)
{
  size_t treeL = size - 1;
  size_t i = 0;
  int temp;
  for (i = 0; i < (size - 1); i++, treeL--) {
    makeMaxHeap(array, treeL + 1, size);
    temp = array[0];
    array[0] = array[treeL];
    array[treeL] = temp;
    print_array(array, size);
  }
}
