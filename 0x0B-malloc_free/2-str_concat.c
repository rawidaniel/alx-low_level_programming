#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenate two string
 * @s1: a string to be concatenated
 * @s2: a string to be concatenated
 * Return: NULL if it failes otherwise a pointer
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0;
	int len1 = 0, len2 = 0;
	char *concat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (*(s1 + i) != '\0')
	{
		i++;
		len1++;
	}
	while (*(s2 + j) != '\0')
	{
		j++;
		len2++;
	}
	len2++;
	concat = malloc(sizeof(char) * (len1 + len2));
	if (concat == NULL)
		return (NULL);
	i = 0, j = 0;
	while (i < len1)
	{
		*(concat + i) = *(s1 + i);
		i++;
	}
	while (j < len2)
	{
		*(concat + i) = *(s2 + j);
		j++, i++;
	}
	return (concat);
}
