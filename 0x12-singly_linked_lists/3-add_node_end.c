#include "lists.h"

/**
 * add_node_end - function that adds a new node at the end of a list_t list.
 * @head: pointer to start
 * @str: string
 *
 * Return: Address of new element.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *end_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = strlen(str);
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	end_node = *head;
	while (end_node->next != NULL)
	{
		end_node = end_node->next;
	}

	end_node->next = new_node;

	return (new_node);
}
