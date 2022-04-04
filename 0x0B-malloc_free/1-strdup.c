#include "main.h"
#include <stdlib.h>
/**
 * _strdup - copies a strng to a newly allocated memory
 * @str: a string to be copied
 * Return: NULL if memory is sufficient or a pointer
 */
char *_strdup(char *str)
{
	int i = 0, len = 0;
	char *copy;

	if (str == NULL)
		return (NULL);
	while (*(str + i) != '\0')
	{
		i++;
		len++;
	}
	len++;
	copy = malloc(sizeof(char) * len);
	if (copy == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		*(copy + i) = *(str + i);
		i++;
	}
	return (copy);
}
