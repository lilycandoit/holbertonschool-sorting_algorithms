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
	*b=temp;
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

void lomuto_partition(int *array, size_t low, size_t high, size_t size)
{
	int pivot = array[high];
	size_t i = low;

	for (size_t j = low; j < high -1; j++)
	{
		if (array[j] < pivot)
		{
			if (i != j)
			{
				swap(&array[i], &array[j]);
				print_array(array, size);
			}
		}
		i++;
	}

	if (i != high)
	{
		swap(&array[i], &array[high];
		print_array(array, size);
	}

	return i;
}
