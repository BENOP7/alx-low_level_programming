#include "lists.h"

/**
 * add_nodeint_end - adds a node to the end of a linked list
 * @head: first node
 * @n: value of node to add
 * Return: pointer to added node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node = NULL;
	listint_t *tmp = NULL;

	node = (listint_t *) malloc(sizeof(listint_t));
	if (!node)
		return (NULL);
	node->n = n;
	node->next = NULL;
	tmp = *head;
	if (*head == NULL)
	{
		*head = node;
		return (node);
	}
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = node;

	return (node);
}
