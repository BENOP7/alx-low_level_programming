#include "lists.h"

/**
 * get_dnodeint_at_index - get element in doubly linked list at index given
 * @head: first node of the double linked list
 * @index: index of element requested
 * Return: pointer of requested element
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	if (head != NULL)
	{
		while (head)
		{
			if (count == index)
				return (head);
			++count;
			head = head->next;
		}
	}
	return (NULL);
}
