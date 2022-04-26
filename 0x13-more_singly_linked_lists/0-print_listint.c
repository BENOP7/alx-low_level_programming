#include "lists.h"

/**
 * print_listint - prints the integers that are in a linked list
 * @h: head of the linked list
 * Return: number of elements in the linked list
 */
size_t print_listint(const listint_t *h)
{
	size_t len;

	if (!h)
		return (0);
	printf("%d\n", h->n);
	len = 1 + print_listint(h->next);
	return (len);
}
