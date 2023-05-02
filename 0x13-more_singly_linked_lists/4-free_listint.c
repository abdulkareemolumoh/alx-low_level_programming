#include "lists.h"

/**
 * free_listint - function that frees a listint_t list.
 * @head: pointer to the head.
 *
 * Return: 0.
 */

void free_listint(listint_t *head)
{
	listint_t *node;

	while (head != NULL)
	{
		node = head;
		head = head->next;
		free(node);
	}
}
