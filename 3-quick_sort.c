#include "sort.h"

void quicksort(int *array, int low, int high, size_t size);
/**
 *swap - two numbers
 *@a: int
 *@b: int
 *@array: to print
 *@size: of array
 */

void swap(int a, int b, int *array, size_t size)
{
	int t;

	t = array[a];
	array[a] = array[b];
	array[b] = t;
	print_array(array, size);
}
/**
 *partition - takes last element as pivot, places pivot at correct position
 *@array: sub array being ordered
 *@low: smallest num
 *@high: biggest num
 *@size: of array
 *Return: index of smaller element + 1
 */

int partition(int *array, int low, int high, size_t size)
{
	int pivot = array[high];
	int newpivot = low;
	int i;

	for (i = low; i < high; ++i)
	{
		if (array[i] <= pivot)
		{
			if (i > newpivot)
				swap(newpivot, i, array, size);
			newpivot++;
		}
	}
	if (newpivot <= high)
	{
		swap(newpivot, high, array, size);
	}

	return (newpivot);
}



/**
 *quick_sort - sorts array
 *@array: to be sorted
 *@size: of the array
 */

void quick_sort(int *array, size_t size)
{

	if (array == NULL || size < 2)
		return;
	quicksort(array, 0, size - 1, size);

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
		pivot = partition(array, low, high, size);
		quicksort(array, low, pivot - 1, size);
		quicksort(array, pivot + 1, high, size);
	}
}
