#include "lists.h"

/**
 * free_listint - deallocates the memory used by a linked list
 * @head: first node
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	if (head)
	{
		listint_t *tmp;

		while (head)
		{
			tmp = head->next;
			free(head);
			head = tmp;
		}
	}
}
