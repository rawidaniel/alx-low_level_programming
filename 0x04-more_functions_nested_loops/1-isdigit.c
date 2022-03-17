#include "main.h"
/**
 * _isdigit - checks for a digit number
 * @c : character to check
 * Return: 1 if c id a digit or 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
