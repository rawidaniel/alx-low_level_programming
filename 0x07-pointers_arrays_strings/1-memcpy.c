#include "main.h"
/**
 * _memcpy -copies n bytes from memory area source to destination
 * @dest: pointer to destination
 * @src: pointer to source
 * @n: number of bytes to be copie
 * Return: pointer to des
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
