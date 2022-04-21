#include "lists.h"

/**
 * add_node - ad a new node at the beginning of linked list
 * @head: a pointer to head node
 * @str: the string copied to the new created node
 * Return: a pointer to new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new = (list_t *)malloc(sizeof(list_t));

	if (new == NULL)
	{
		return (NULL);
	}
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = *head;
	*head = new;
	return (*head);
}
