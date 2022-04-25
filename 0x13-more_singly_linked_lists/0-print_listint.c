#include "lists.h"

/**
 * print_listint - prints the integers that are in a linked list
 * @h: head of the linked list
 * Return: number of elements in the linked list
 */
size_t print_listint(const listint_t *h)
{
	if (!h)
		return (0);
	printf("%d\n", h->n);
	return (1 + print_listint(h->next));
}
