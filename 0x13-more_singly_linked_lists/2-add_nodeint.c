#include "lists.h"

/**
 * add_nodeint - function that adds a new node at the beginning of a list.
 * @head: pointer to the head
 * @n: integer value to be stored in new node.
 *
 * Return: address of new element.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
	{
		return (NULL);
	}

	newNode->n = n;
	newNode->next = *head;
	*head = newNode;

	return (newNode);
}
