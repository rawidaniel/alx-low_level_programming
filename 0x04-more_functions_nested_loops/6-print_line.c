#include "main.h"
/**
 * print_line - drawing straight line
 * @n: integer number
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		_putchar(95);
	}
	_putchar('\n');
}
