#include "lists.h"
/**
 * print_listint - prints elements of a listint_t list
 * @h: pointer to struct listint_s
 * Return: number of nodes in linked list
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	const listint_t *temp;

	temp = h;

	if (h != NULL)
	{
		while (temp != NULL)
		{
			printf("%d\n", temp->n);
			count++;
			temp = temp->next;
		}
	}
	return (count);
}
