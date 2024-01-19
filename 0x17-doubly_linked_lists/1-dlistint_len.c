#include "lists.h"

/**
 * dlistint_len - compute number of elements in linked list
 * @h: linked list
 * Return: length of the linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;

	if (!h)
		return (0);
	while (h)
	{
		++len;
		h = h->next;
	}

	return (len);
}
