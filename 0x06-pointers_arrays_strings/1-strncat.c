#include "main.h"
/**
 * _strncat - concatenate n bytes to destination string
 * @dest: string to be appended to
 * @src: string to append
 * @n: append n bytes of character
 * Return: concatenate string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	for (j = 0; j < n; j++, i++)
	{
		dest[i] = src[j];
	}
	return (dest);
}
