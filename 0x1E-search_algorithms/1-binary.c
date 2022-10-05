#include "search_algos.h"

/**
 * binary_search -searches for a value in a sorted array of integers
 * using the Binary search algorithm
 * @array: a pointer to the first element of the array
 * @size: the number of elements in array
 * @value:  the value to search for
 *
 * Return: the first index where value if it present or -1 if not present
 */
int binary_search(int *array, size_t size, int value)
{
	size_t low = 0, mid = 0, high = size - 1, i  = 0;

	if (array == NULL || size == 0)
		return (-1);
	while (high >= low)
	{
		printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{
			printf("%d", array[i]);
			if (i < high)
				printf(", ");
		}
		printf("\n");
		mid = (high + low) / 2;
		if (value == array[mid])
			return (mid);
		else if (value > array[mid])
			low = mid + 1;
		else
			high = mid - 1;
	}
	return (-1);
}
