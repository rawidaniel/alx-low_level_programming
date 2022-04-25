#include "lists.h"
/**
 * free_listint2 - fress a listint_t list
 * @head: pointer which point to pointet to head node
 */
void free_listint2(listint_t **head)
{
	listint_t *temp, *new;
	
	new = *head;
	while (new != NULL)
	{
		temp = new->next;
		free(new);
		new = temp;
	}
	*head = new;
}
