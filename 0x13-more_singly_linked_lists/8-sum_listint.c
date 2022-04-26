#include "lists.h"

/**
 * sum_listint - calculates the sum of all node values of a linked list
 * @head: first node of the list
 * Return: sum of the values
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (!head)
		return (sum);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
