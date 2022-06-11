#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node at a given position in a doubly
 * linked list
 * @head: pointer to the first node of the list
 * @index: position of node to be deleted
 * Return: 1 on SUCCESS, -1 on FAILURE
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp, *nxt, *prv;
	unsigned int count = 0;

	if (head == NULL || *head == NULL)
		return (-1);
	tmp = *head;
	do {
		if (count == index)
		{
			nxt = tmp->next;
			if (tmp == *head)
				*head = nxt;
			prv = tmp->prev;
			free(tmp);
			if (nxt)
				nxt->prev = prv;
			if (prv)
				prv->next = nxt;
			return (1);
		}
		++count;
		tmp = tmp->next;
	} while (tmp == NULL);
	return (-1);
}
