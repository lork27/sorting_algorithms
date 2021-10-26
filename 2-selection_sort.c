#include "sort.h"

/**
 *selection_sort - sort array in ascending order
 *@array: to be sorted
 *@size: of the array
 */

void selection_sort(int *array, size_t size)
{
	unsigned long int i, j, position, swap;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		position = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[position] > array[j])
				position = j;
		}
		if (position != i)
		{
			swap = array[i];
			array[i] = array[position];
			print_array(array, size);
			array[position] = swap;
		}

	}
}
