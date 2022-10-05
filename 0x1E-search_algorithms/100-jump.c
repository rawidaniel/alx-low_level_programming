#include "search_algos.h"
#include <math.h>

/**
 * jump_search -  searches for a value in a sorted array of integers using
 * the Jump search algorithm
 * @array: a pointer to the first element of the array
 * @size: the number of elements in array
 * @value:  the value to search for
 *
 * Return: the first index where value if it present or -1 if not present
 */
int jump_search(int *array, size_t size, int value)
{
	size_t prev = 0, jump_step;

	jump_step = sqrt(size);
	if (array == NULL || size == 0)
		return (-1);
	/* Finding block in which element lies, if it is present */
	printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);
	while (array[prev] < value)
	{
		if (array[jump_step] >= value || jump_step >= size)
		{
			break;
		}
		else
		{
			printf("Value checked array[%ld] = [%d]\n", jump_step, array[jump_step]);
			prev = jump_step;
			jump_step += sqrt(size);
		}
	}
	printf("Value found between indexes [%ld] and [%ld]\n", prev, jump_step);
	/*Finding the element in the identified block */
	while (array[prev] < value && prev < size)
	{
		printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);
		prev++;
	}
	if (array[prev] == value)
	{
		printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);
		return (prev);
	}
	else
		return (-1);
}
