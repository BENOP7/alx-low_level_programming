#include "lists.h"

/**
 * free_listint2 - frees a linked list from memory
 * @head: pointer to th first node
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp = NULL;

	if (!head)
		return;
	while (*head)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}
}
