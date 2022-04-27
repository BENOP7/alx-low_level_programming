#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: pointer to frist node of linked list
 * Return: pointer to first node of the list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *tmp = *head;
	listint_t *prev = NULL;
	
	if (!head || !*head)
		return (NULL);
	while (1)
	{
		tmp = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		if (tmp)
			*head = tmp;
		else
			break;
	}
	return (*head);
}
