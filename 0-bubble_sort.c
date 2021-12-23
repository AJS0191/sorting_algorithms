#include "sort.h"
/**
 * bubble_sort- Sorts array. Bubbly.
 * @array: the array to be sorted.
 * @size: size of given array
 * Return: VOID
 **/

void bubble_sort(int *array, size_t size)
{
	int temp;
	size_t i = 0;
	size_t j = 0;

	while (j < size)
	{
		for(i = 0; i < (size - 1); i++)
		{

			if (array[i] > array[i + 1])
			{
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				print_array(array, size);
			}
		}
		j++;
	}
}
