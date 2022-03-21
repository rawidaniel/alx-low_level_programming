#include "main.h"
/**
 * puts_half - prints half of a string
 * @str: a pointer
 */
void puts_half(char *str)
{
	int i;
	int j;
	int k;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	j = 0;
	k = i - 1;
	if (i % 2 == 0)
	{
		j = i / 2;
	}
	else
	{
		j = k / 2;
		j = j + 1;
	}
	while (j < i)
	{
		_putchar(str[j]);
		j++;
	}
	_putchar('\n');
}
