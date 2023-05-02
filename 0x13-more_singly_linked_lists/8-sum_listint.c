#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a linked list
 * @head: pointer to the head of the linked list
 *
 * Return: sum of all the data (n) or 0 if the list is empty
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n; /* add the value of the current node to sum */
		head = head->next; /* move to the next node */
	}

	return (sum); /* return the sum */
}

