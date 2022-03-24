#include "main.h"
/**
 * _strncpy - copy n byte of character to the destination string
 * @dest: string to which it will be copied
 * @src: string to be copied
 * @n: number of bytes to be copies
 * Return: destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[j] = src[j];
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}
	return (dest);
}

