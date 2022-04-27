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
	listint_t *tmp;
	listint_t *newNode = NULL;
	listint_t *prev = NULL;
	unsigned int i = 0;

	tmp = *head;
	while (tmp)
	{
		if (idx == i++)
		{
			newNode = malloc(sizeof(listint_t));
			if (!newNode)
				return (NULL);
			newNode->n = n;
			newNode->next = tmp;
			if (!*head)
			{
				*head = newNode;
				return (newNode);
			}
			if (prev)
				prev->next = newNode;
			else
				*head = newNode;
			return (newNode);
		}
		prev = tmp;
		tmp = tmp->next;
		if (idx == i && !tmp)
			return (add_nodeint_end(head, n));
	}
	return (NULL);
}
