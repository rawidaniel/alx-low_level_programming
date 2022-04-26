#include "lists.h"
/**
 * pop_listint - delete the head node of a listint_t linked list
 * @head: pointer to pointer to head node
 * Return: value of head node data(n)
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (*head == NULL)
		return (0);
	temp = *head;
	*head = temp->next;
	data = temp->n;
	free(temp);
	return (data);
}


