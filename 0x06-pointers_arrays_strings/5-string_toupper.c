#include "main.h"
/**
 * string_toupper - convert all lowercase letter to uppercase
 * @s: array
 * Return: string
 */
char *string_toupper(char *s)
{
	int i = 0;
	int j;

	while (s[i] != '\0')
	{
		i++;
	}
	for (j = 0; j < i; j++)
	{
		if (s[j] >= 'a' && s[j] <= 'z')
		{
			s[j] = s[j] - 32;
		}
	}
	return (s);
}
