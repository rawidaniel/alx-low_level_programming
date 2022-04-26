#include "lists.h"
/**
 * insert_nodeint_at_index - inser a node at a given position
 * @head: pointer that point to pointer to head node
 * @idx: a given position
 * @n: the data added to the new node
 * Return: the new node or NULL if it faile
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode, *temp;
	unsigned int i;

	i = 0;
	if (head == NULL)
		return (NULL);
	temp = *head;
	newnode = (listint_t *)malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}
	while (i < (idx - 1))
	{
		temp = temp->next;
		i++;
		if (temp == NULL)
		{
			free(newnode);
			return (NULL);
		}
	}
	newnode->next = temp->next;
	temp->next = newnode;
	return (newnode);
}
