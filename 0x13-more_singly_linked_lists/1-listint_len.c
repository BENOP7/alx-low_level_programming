#include "lists.h"

/**
 * listint_len - returns the size of a linked list
 * @h: head of linked list
 * Return: size of linked list
 */
size_t listint_len(const listint_t *h)
{
	if (!h)
		return (0);
	return (1 + listint_len(h->next));
}
