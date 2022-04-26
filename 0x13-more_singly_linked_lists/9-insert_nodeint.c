#include "lists.h"

/**
 * insert_nodeint_at_index - inserts new node at a particular position
 * in a linked list
 * @head: pointer to the first element of the list
 * @idx: index of the insertion point
 * @n: data of the new node
 * Return: pointer to the inserted node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp = *head;
	listint_t *newNode = NULL;
	listint_t *prev = NULL;
	unsigned int i = 0;

	while (tmp)
	{
		if (idx == i++)
		{
			newNode = malloc(sizeof(listint_t));
			if (!newNode)
				return (newNode);
			newNode->n = n;
			newNode->next = tmp;
			if (prev)
				prev->next = newNode;
			else
				*head = newNode;
			return (newNode);
		}
		prev = tmp;
		tmp = tmp->next;
	}
	return (NULL);
}
