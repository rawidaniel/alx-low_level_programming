#include "search_algos.h"

/**
 * interpolation_search -  searches for a value in a sorted array of integers
 * using the Interpolation search algorithm
 * @array: a pointer to the first element of the array
 * @size: the number of elements in array
 * @value:  the value to search for
 *
 * Return: the first index where value if it present or -1 if not present
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1, pos;

	if (array == NULL || size == 0)
		return (-1);

	while (high >= low && array[low] <= value && array[high] >= value)
	{
		pos = low + (((double)(high - low) / (array[high] - array[low])) *
				(value - array[low]));
		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
		if (array[pos] == value)
			return (pos);
		else if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;
	}
	printf("Value checked array[%ld] is out of range\n", pos);
	return (-1);
}
