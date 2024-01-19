#include "lists.h"

/**
 * free_dlistint - frees a linked list from memory
 * @head: pointer to the head
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
