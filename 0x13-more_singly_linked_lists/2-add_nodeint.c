#include "lists.h"

/**
 * add_nodeint - adds an node to the linked list
 * @head: first node
 * @n: value of node
 * Return: pointer to new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node = NULL;

	node = (listint_t *) malloc(sizeof(listint_t));
	if (!node)
		return (NULL);
	node->n = n;
	node->next = *head;
	*head = node;
	return (*head);
}
