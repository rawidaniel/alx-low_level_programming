#include "search_algos.h"

/**
 * min - computer the minimum integer
 * @a: integer to be compared
 * @b: integer to be compared
 *
 * Return: the smallest number
 */
size_t min(size_t a, size_t b)
{
	if (a > b)
		return (b);
	else
		return (a);
}

/**
 * binarySearch -searches for a value in a sorted array of integers
 * using the Binary search algorithm
 * @array: a pointer to the first element of the array
 * @low: lower bound element
 * @high: higher bound element
 * @value:  the value to search for
 *
 * Return: the first index where value if it present or -1 if not present
 */

int binarySearch(int *array, size_t low, size_t high, int value)
{
	printf("Value found between indexes [%ld] and [%ld]\n", low, high);
	while (high >= low)
	{
		size_t i;
		size_t mid = (high + low) / 2;

		printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{
			printf("%d", array[i]);
			if (i < high)
				printf(", ");
		}
		printf("\n");

		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
	}
	return (-1);
}

/**
 * exponential_search - searches for a value in a sorted array of integers
 * using the Exponential search algorithm
 * @array: a pointer to the first element of the array
 * @size: the number of elements in array
 * @value:  the value to search for
 *
 * Return: the first index where value if it present or -1 if not present
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i = 1;

	if (array == NULL || size == 0)
		return (-1);
	if (array[0] == value)
		return (0);

	while (i < size && array[i] <= value)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		i *= 2;
	}
	return (binarySearch(array, i / 2, min(i, size - 1), value));
}
