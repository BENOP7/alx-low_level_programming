#include "lists.h"
#include <string.h>

/**
 * add_node_end - add a node to the end of the linked list
 * @head: pointer to the linked list
 * @str: value of node
 * Return: pointer to the added node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp;
	list_t *new;
	int i = 0;

	if (!head)
		return (NULL);
	temp = *head;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	if (str)
	{
		new->str = strdup(str);
		while (*(new->str + i))
			++i;
	}
	else
		new->str = NULL;
	new->len = i;

	if (!temp)
	{
		*head = new;
		new->next = NULL;
		return (new);
	}

	while (1)
	{
		if (!temp->next)
			break;
		temp = temp->next;
	}

	temp->next = new;
	new->next = NULL;
	return (new);
}
