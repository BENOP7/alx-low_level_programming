#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a linked list
 * @head: first node of linked list
 * @index: index of the node
 * Return: node at index "index"
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head)
	{
		if (index == i++)
			return (head);
		head = head->next;
	}
	return (NULL);
}
