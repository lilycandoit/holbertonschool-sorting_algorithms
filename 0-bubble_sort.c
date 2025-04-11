#include "sort.h"
#include "stdio.h"


/**
 * swap - helper function to swap 2 integers
 * @a: pointer to first integer
 * @b: pointer to second integer
 * Return: void
 */

void swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}


/**
 * bubble_sort - sort an array of integers in ascending order
 * @array: the pointer to the array
 * @size: number of elements
 * Return: void
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int swapped;

	for (i = 0; i < size - 1; i++)
	{
		swapped = 0; /* false */
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
				swapped = 1; /* true */

				/* print the array after each swap */
				print_array(array, size);
			}
		}

		/* if no swap by inner loop meaning it is sorted, then skip */
		if (swapped == 0)
			break;
	}

}

