#include "variadic_functions.h"
/**
 * sum_them_all - summ all of the parameters
 * @n: number of argument
 * Return: sum of argumnets or 0 if n is equal to 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ag;
	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (0);
	va_start(ag, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(ag, int);
	}
	va_end(ag);
	return (sum);
}
