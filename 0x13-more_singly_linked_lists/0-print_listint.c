#include "lists.h"

/**
 * print_listint - prints the integers that are in a linked list
 * @h: head of the linked list
 * Return: number of elements in the linked list
 */
size_t print_listint(const listint_t *h)
{
	size_t len = 0;

	while (h)
	{
		printf("%d\n", h->n);
		len++;
		h = h->next;
	}
	return (len);
}
