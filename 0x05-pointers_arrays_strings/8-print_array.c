#include "main.h"
#include <stdio.h>
/**
 * print_array - print elements of an integer array
 * @a: a pointer
 * @n: integer number of elements to be printed
 */
void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		printf("%d", a[i]);
		if (i != 4)
		{
			printf(", ");
		}
		i++;
	}
	printf(" \n");
}
