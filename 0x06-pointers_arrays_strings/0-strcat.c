#include "main.h"
/**
 * char *_strcat - concatenate two strings
 * @dest: pointer one
 * @src: ponter two
 * Return: concatenate string
 */
char *_strcat(char *dest, char *src)
{
	int i, j, k;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		j++;
	}
	for (k = 0; k <= j; k++)
	{
		dest[i + k] = src[k];
	}
	return (dest);
}
