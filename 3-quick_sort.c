#include "sort.h"
#include "stdio.h"

/**
 * swap - to swap 2 integers in memory
 * @a: pointer to 1st integer
 * @b: pointer to 2nd integer
 * Return: void
 */

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * lomuto_partition - rearrange subarray using Lomuto scheme
 * last element is choosen as the pivot
 * @array: pointer to the checking array
 * @low: starting index of the subarray
 * @high: ending index of the subarray (pivot)
 * size: the number of elements in the array
 * Return: void
 */

size_t lomuto_partition(int *array, size_t low, size_t high, size_t size)
{
	int pivot = array[high];
	size_t i, j;
	i = low;

	for (j = low; j < high; j++)
	{
		if (array[j] < pivot)
		{
			if (i != j)
			{
				swap(&array[i], &array[j]);
				print_array(array, size);
			}
			i++;
		}
	
	}

	if (i != high && array[i] != array[high])
	{
		swap(&array[i], &array[high]);
		print_array(array, size);
	}

	return i;
}

/**
 * quick_sort_recursive - recursively apply quick_sort to subarrays
 * @array: pointer to the array
 * @low: the starting index of current array
 * @high: the ending index of current array
 * @size: the number of elements in array
 * Return: void
 */

void quick_sort_recursive(int *array, size_t low, size_t high, size_t size)
{
	if (low < high)
	{
		size_t pi = lomuto_partition(array, low, high, size);
		/* the index where pivot is at the correct position */

		if (pi > 0) /* to avoid negative number with pi - 1 */
			quick_sort_recursive(array, low, pi - 1, size);

		quick_sort_recursive(array, pi + 1, high, size);
	}
}

/**
 * quick_sort - to sort array in ascending order using Quick sort algorithm
 * @array: the pointer to the array
 * @size: the number of elements in the array.
 */

void quick_sort(int *array, size_t size)
{
	if (!array || size < 2)
		return;

	quick_sort_recursive(array, 0, size - 1, size);
}

