#include "sort.h"

/**
 *bubble_sort - function that sorts array
 *@array: array that will be sorted
 *@size: size of the array
 */

void bubble_sort(int *array, size_t size)
{
	unsigned long int i, j;
	int tmp;
	int flag = 0;

	for (i = 0; i < size - 1; i++)
	{
		flag = 0;
		for (j = 0; j < size - 1; j++)
		{

			if (array[j] > array[j + 1])
			{
				tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;
				flag = 1;
				print_array(array, size);
			}
			if (flag == 0)
			{
				continue;
			}
		}
	}
}
