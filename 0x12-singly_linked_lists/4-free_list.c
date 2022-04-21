#include "lists.h"

/**
 * free_list - frees a linked list from memory
 * @head: pointer to the head
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *temp = head;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
