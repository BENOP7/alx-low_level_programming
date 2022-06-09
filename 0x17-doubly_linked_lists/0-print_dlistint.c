#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - print all the elements of a doubly linked list
 * @h: pointer to the linked list
 * Return: number of nodes of the linked list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	if (!h)
		return (0);

	do {
		printf("[%d]\n", h->n);
		++count;
		h = h->next;
	} while (h);

	return (count);
}
