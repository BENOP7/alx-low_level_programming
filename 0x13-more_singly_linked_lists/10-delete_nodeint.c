#include "lists.h"

/**
 * delete_nodeint_at_index - deletes th node at a particular index
 * @head: pointer to the first node
 * @index: position of the node (count including zero(0))
 * Return: 1 if sucess and -1 otherwise
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *prev = NULL;
	listint_t *tmp = *head;

	if (!head || !*head)
		return (-1);
	while (tmp)
	{
		if (index == i++)
		{
			if (!prev)
			{
				*head = tmp->next;
				free(tmp);
				return (1);
			}
			prev->next = tmp->next;
			free(tmp);
			return (1);
		}
		prev = tmp;
		tmp = tmp->next;
	}
	return (-1);
}
