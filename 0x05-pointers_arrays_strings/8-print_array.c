#include "main.h"
#include <stdio.h>
/**
 * print_array - print elements of an integer array
 * @a: array
 * @n: number of elements
 */
void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		if (i != (n - 1))
		{
			printf("%d, ", a[i]);
		}
		else
		{
			printf("%d", a[i]);
		}
		i++;
	}
	printf(" \n");
}
