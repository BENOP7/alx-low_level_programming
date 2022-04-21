#include "lists.h"
#include <string.h>

/**
 * add_node - add node at the beginning of a linked list
 * @head: first node
 * @str:string value to assign to the new node
 * Return: pointer to the new node
 */
list_t *add_node(list_t **head, const char *str)
{
	int i = 0;
	list_t *new;

	if (!head)
		return (NULL);

	new = malloc(sizeof(list_t));
	if (!new)
	{
		free(new);
		return (NULL);
	}
	if (!str)
		return (NULL);
	else
	{
		new->str = strdup(str);
		if (!new->str)
		{
			free(new->str);
			return (NULL);
		}
		while (new->str[i])
			++i;
	}
	new->len = i;
	new->next = *head;

	*head = new;
	return (*head);
}
