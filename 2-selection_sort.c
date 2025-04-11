#include "sort.h"
#include "stdio.h"

/**
 * swap - to swap two integers
 * @a: pointer to first integer
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
 * selection_sort - to sort an array in ascending order using Selection sort
 * @array: pointer to the array
 * @size: number of elements
 * Return: void
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j, min_idx;

	for (i = 0; i < size - 1; i++)
	{
		min_idx = i; /* assume 1st element is min */

		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min_idx])
				min_idx = j; /* update min_idx if smaller value found */
		}

		/* put min at the correct position */
		swap(&array[min_idx], &array[i]);

		/* print array after each swap */
		print_array(array, size);
	}
}

