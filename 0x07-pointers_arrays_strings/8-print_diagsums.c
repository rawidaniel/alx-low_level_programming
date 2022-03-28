#include "main.h"
#include <stdio.h>
/**
 * print_diagsums -sum the diagonal element of array
 * @a: a pointer
 * @size: element of an array
 */
void print_diagsums(int *a, int size)
{
	int row, i = 0;
	int diag1sum = 0;
	int diag2sum = 0;

	for (row = 0; row < size; row++)
	{
		i = (row * size) + row;
		diag1sum += a[i];
	}
	for (row = 1; row < size; row++)
	{
		i = (row * size) - row;
		diag2sum += a[i];
	}
	printf("%d, %d\n", diag1sum, diag2sum);
}
