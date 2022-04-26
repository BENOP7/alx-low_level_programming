#include "lists.h"

/**
 * pop_listint - deletes the first node of the linked list
 * @head: first linked list node
 * Return: value of the popped element
 */
int pop_listint(listint_t **head)
{
	int data = 0;
	listint_t *tmp = NULL;

	if (!*head)
		return (0);
	tmp = *head;
	data = tmp->n;
	*head = tmp->next;
	free(tmp);
	return (data);
}
