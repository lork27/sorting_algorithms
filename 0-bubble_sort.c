#include "sort.h"

/**
 *swap - function that sorts array
 *@array: array that will be sorted
 *@size: size of the array
 */
void swap(int *arr, int idx, int idy)
{
  int tmp;

  tmp = arr[idx];
  arr[idx] = arr[idy];
  arr[idy] = tmp;
}
/**
 *bubble_sort - function that sorts array
 *@array: array that will be sorted
 *@size: size of the array
 */
void bubble_sort(int *array, size_t size)
{
	unsigned long int i, j;
	int flag = 0;

  if (array == NULL || size < 2)
    return;

	for (i = 0; i < size - 1; i++)
	{
		flag = 0;
		for (j = 0; j < size - 1; j++)
		{

			if (array[j - 1] > array[j])
			{
        swap(array, j - 1, j);
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
