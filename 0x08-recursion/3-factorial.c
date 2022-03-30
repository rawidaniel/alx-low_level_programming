#include "main.h"
/**
 * factorial - multiply consecutive number from 1 up to given number
 * @n: integer number
 * Return: 0 if n is less than zero otherwise integer number
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
