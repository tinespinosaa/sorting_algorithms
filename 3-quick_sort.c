#include "sort.h"

/**
 * swap - swaps 2 values
 * @array: array
 * @size: array size
 * @a: 1st value to swap
 * @b: 2nd value to swap
 *
 * Return: void
 */

void swap(int *array, size_t size, int *a, int *b)
{
	if (*a != *b)
	{
		*a = *a + *b;
		*b = *a - *b;
		*a = *a - *b;
		print_array(array, size);
	}
}

/**
 * lomuto_partition - parts an array
 * @array: array
 * @size: array size
 * @start: array beginning
 * @end: array end
 *
 * Return: void
 */

size_t lomuto_partition(int *array, size_t size, ssize_t start, ssize_t end)
{
	ssize_t i, j;
	int pivot = array[end];

	for (i = j = start; j < end; j++)
		if (array[j] < pivot)
			swap(array, size, &array[j], &array[i++]);
	swap(array, size, &array[i], &array[end]);
	return (i);
}

/**
 * quicksort - sorts the array
 * @array: array
 * @size: array size
 * @start: array beginning
 * @end: array end
 *
 * Return: void
 */

void quicksort(int *array, size_t size, ssize_t start, ssize_t end)
{
	if (start < end)
	{
		size_t s = lomuto_partition(array, size, start, end);

		quicksort(array, size, start, s - 1);
		quicksort(array, size, s + 1, end);
	}
}

/**
 * quick_sort - sorts an array of integers in ascending order
 * using the Quick sort algorithm
 * @array: array to sort
 * @size: array size
 *
 * Return: void
 */

void quick_sort(int *array, size_t size)
{
	if (!array || !size)
		return;
	quicksort(array, size, 0, size - 1);
}
