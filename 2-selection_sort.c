#include "sort.h"
/**
* selection_sort- performs a selection sort on an array
* @array: array to sort
* @size: size of the array
* Return: void
**/
void selection_sort(int *array, size_t size)
{
	size_t step;
	size_t min_idx;
	size_t i;

	if (array == NULL)
		return;
	for (step = 0; step < size - 1; step++)
	{
		min_idx = step;
		for (i = step + 1; i < size; i++)
		{
			if (array[i] < array[min_idx])
				min_idx = i;
		}
		if (min_idx != step)
		{
			swap(&array[min_idx], &array[step]);
			print_array(array, size);
		}
	}
}
/**
* swap - swaps the array
* @a: first array
* @b: second array
* Return: void
**/

void swap(int *a, int *b)
{
	size_t temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
