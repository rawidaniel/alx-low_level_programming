#include "main.h"
/**
 * puts2 - prints every other character of a string
 * @str: a pointer
 */
void puts2(char *str)
{
	int i;
	int j;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j <= i - 1)
	{
		if (j % 2 == 0)
		{
			_putchar(str[j]);
		}
		j++;
	}
	_putchar('\n');
}
