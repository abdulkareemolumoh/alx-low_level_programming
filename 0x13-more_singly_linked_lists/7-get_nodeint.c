#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node of a list
 * @head: pointer to head
 * @index: index
 *
 * Return: nth node of a listint_t
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node = head;

	while (node != NULL && index > 0)
	{
		node = node->next;
		index--;
	}

	if (node == NULL)
	{
		return (NULL);
	}
	else
	{
		return (node);
	}
}
