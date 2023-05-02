#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t list.
 * @head: Pointer to the head node.
 *
 * Return: 0.
 */

void free_listint2(listint_t **head)
{
	listint_t *node;

	if (head == NULL)
	{
	return;
	}

	while (*head == NULL)
	{
		node = *head;
		*head = (*head)->next;
		free(node);
	}

	*head = NULL;

}
