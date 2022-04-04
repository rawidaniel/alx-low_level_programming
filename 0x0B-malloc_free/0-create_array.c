#include "main.h"
#include <stdlib.h>
/**
 * create_array - create an array of character
 * @size: elements of array
 * @c: character
 * Return: NULL if the size is zero otherwise pointer to an array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ch = malloc(size * sizeof(char));

	if (size == 0)
		return (NULL);
	if (ch == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		*(ch + i) = c;
	}
	*(ch + i) = '\0';
	return (ch);
}
