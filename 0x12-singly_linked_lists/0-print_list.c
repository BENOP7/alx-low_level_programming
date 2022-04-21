#include "lists.h"
#include <stdio.h>

/**
 * print_list - print all the elements of a linked list
 * @h: pointer to the linked list
 * Return: number of nodes of the linked list
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	if (!h)
		return (0);

	do {
		if (!h->str)
		{
			printf("[%u] %s\n", 0, "(nil)");
		}
		else
			printf("[%u] %s\n", h->len, h->str);
		++count;
		h = h->next;
	} while (h);

	return (count);
}
