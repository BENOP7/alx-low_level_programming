#include "lists.h"

/**
 * print_listint_safe - prints the elements of a linked list that contains
 * a loop
 * @head: first node
 * Return: size of the linked list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t num = 0;
	const listint_t *current = head;

	if (!head)
		exit(98);

	do {
		printf("[%p] %d\n", (void *) current, current->n);
		++num;
		current = current->next;
	} while (current != head);

	return (num);
}
