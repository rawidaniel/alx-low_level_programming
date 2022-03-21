#include "main.h"
/**
 * _strlen - calculate the length of string
 * @s: pointer
 * Return: integer number
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
