#include "lists.h"
/**
 * sum_listint - add all data(n) of a listint_t linked list
 * @head: pointer to head node
 * Return: sum of all data or 0 if the list is empty
 */
int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
