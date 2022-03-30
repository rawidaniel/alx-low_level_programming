#include "main.h"
/**
 * _pow_recursion - calculate power of the number
 * @x: integer number
 * @y: interger number for power
 * Return: -1 if the power is less than zero or integer number
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * (_pow_recursion(x, y - 1)));
	}
}
