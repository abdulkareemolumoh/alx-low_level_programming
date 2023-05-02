#include "lists.h"

/**
 * add_nodeint_end - function that adds a new node at the end of a list
 * @head: pointer to the head of list
 * @n: integer to be added to the list.
 *
 * Return: address of new element || Null
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode, *endNode;

	if (head == NULL)
	{
		return (NULL);
	}

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
	{
		return (NULL);
	}

	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
	}
	else
	{
		endNode = *head;
		while (endNode->next != NULL)
			endNode = endNode->next;
		endNode->next = newNode;
	}

	return (newNode);
}
