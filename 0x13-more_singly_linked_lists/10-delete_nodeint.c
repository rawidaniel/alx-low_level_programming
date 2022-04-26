#include "lists.h"
/**
 * delete_nodeint_at_index - delete a node at a given  given
 * @head: a pointer that point to a pointer to head node
 * @index: a given position
 * Return: 1 or -i if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *nextnode;
	unsigned int i;

	i = 0;
	if (*head == NULL)
		return (-1);
	temp = *head;
	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}
	while (i < (index - 1) && temp != NULL)
	{
		temp = temp->next;
		i++;
	}
	if (i != (index - 1) || temp == NULL)
		return (-1);
	nextnode = temp->next;
	temp->next = nextnode->next;
	free(nextnode);
	return (1);
}

