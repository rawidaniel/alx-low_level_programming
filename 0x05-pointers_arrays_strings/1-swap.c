#include "main.h"
/**
 * swap_int - swap the values of two integer number
 * @a: pointer one
 * @b: pointer two
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
