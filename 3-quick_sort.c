#include "sort.h"

/**
 * quick_sort - sorts an array in ascending order
 * @array: Array of integers
 * @size: Size of array
 * Return: void
 */

void quick_sort(int *array, size_t size)
{
	if (!array || size < 2)
		return;

	quick_recursive(array, 0, size - 1, size);
}

/**
 * quick_recursive - Before / After partition
 * @array: Array
 * @low: Starting index
 * @high: Ending index
 * @size: Size of array
 * Return: Void
 */

void quick_recursive(int *array, int low, int high, size_t size)
{
	int lomuto = 0;

	if (low < high)
	{
		lomuto = partition(array, low, high, size);
		quick_recursive(array, low, lomuto - 1, size);
		quick_recursive(array, lomuto + 1, high, size);
	}
}

/**
 * partition - Using lomuto partition
 * @array: Array
 * @low: Starting index
 * @high: Ending index
 * @size: Size of array
 * @size: Size of array
 * Return: Pivot
 */

int partition(int *array, int low, int high, size_t size)
{
	int pivot = 0, i = 0, x = 0, tmp = 0;

	pivot = array[high];
	i = low;

	for (x = low; x < high; x++)
	{
		if (array[x] < pivot)
		{
			tmp = array[i];
			array[i] = array[x];
			array[x] = tmp;
			if (tmp != array[i])
				print_array(array, size);
			i++;
		}
	}
	tmp = array[i];
	array[i] = array[high];
	array[high] = tmp;

	if (tmp != array[i])
		print_array(array, size);
	return (i);
}
