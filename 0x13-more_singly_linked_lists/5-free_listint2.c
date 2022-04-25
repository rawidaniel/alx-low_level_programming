#include "lists.h"
/**
 * free_listint2 - fress a listint_t list
 * @head: pointer which point to pointet to head node
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		temp = *head;
		*head = temp->next;
		free(temp);
	}
}
