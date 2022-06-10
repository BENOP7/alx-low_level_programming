#include "lists.h"
#include <string.h>

/**
 * add_dnodeint - add node at the beginning of a linked list
 * @head: first node
 * @n: number to assign to the new node
 * Return: pointer to the new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (!head)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (!new)
	{
		free(new);
		return (NULL);
	}
	new->n = n;
	new->next = *head;
	new->prev = NULL;
	*head = new;
	return (*head);
}
