#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - executes a function given as a parameter
 * on each element of an array
 * @array: an array
 * @size: elements of an array
 * @action: execute a function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (size <= 0 || array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
