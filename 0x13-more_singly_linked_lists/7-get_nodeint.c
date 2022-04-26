#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a listint_t list
 * @head: pointer to head node
 * @index: the nth node
 * Return: the addres of the nth node or NULL if the node does not exit
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *temp;

	temp = head;
	i = 0;
	if (head == NULL)
		return (NULL);
	while (i < index && temp != NULL)
	{
		temp = temp->next;
		i++;
	}
	if (temp)
		return (temp);
	else
		return (NULL);
}
