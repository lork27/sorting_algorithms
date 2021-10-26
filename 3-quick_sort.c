#include "sort.h"

void quicksort(int *array, int low, int high, size_t size);
/**
 *swap - two numbers
 *@a: int
 *@b: int
 */

void swap(int *a, int *b)
{
	int t;

	t = *a;
	*a = *b;
	*b = t;
}
/**
 *partition - takes last element as pivot, places pivot at correct position
 *@array: sub array being ordered
 *@low: smallest num
 *@high: biggest num
 *Return: index of smaller element + 1
 */

int partition(int *array, int low, int high)
{
	int pivot = array[high];
	int i = (low - 1);
	int j;

	for (j = low; j <= high - 1; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			swap(&array[i], &array[j]);
		}
	}
	swap(&array[i + 1], &array[high]);
	return (i + 1);
}



/**
 *quick_sort - sorts array
 *@array: to be sorted
 *@size: of the array
 */

void quick_sort(int *array, size_t size)
{
	int low, high;

	if (array == NULL || size < 2)
		return;
	low = 0;
	high = size - 1;
	quicksort(array, low, high, size);
}

/**
 *quicksort - actual quicksort
 *@array: to be sorted
 *@low: lowest number
 *@high: highest number
 *@size: of the array to print in each iteration
 */

void quicksort(int *array, int low, int high, size_t size)
{
	int pivot;

	if (low < high)
	{
		pivot = partition(array, low, high);
		print_array(array, size);
		quicksort(array, low, pivot - 1, size);
		quicksort(array, pivot + 1, high, size);
	}
}
