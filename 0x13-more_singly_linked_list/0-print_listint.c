#include "lists.h"
/**
 * print_listint - prints elements of a listint_t list
 * @h: pointer to struct listint_s
 * Return: number of nodes in linked list
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	if (h != NULL)
	{
		while (h != NULL)
		{
			printf("%d\n", h->n);
			count++;
			h = h->next;
		}
	}
	return (count);
}
