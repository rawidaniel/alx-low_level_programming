#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - searches for specified integer
 * @array: an array of integer
 * @size: elements of an array
 * @cmp: a pointer to a function
 * Return: index of first elemet that matches or -1
 */
int int_index(int *array, int size, int(*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}
