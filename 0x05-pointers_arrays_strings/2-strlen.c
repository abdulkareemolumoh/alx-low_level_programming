#include "main.h"

/**
 * _strlen - a function that returns the length of a string.
 * @s: representaion of s to be returned
 *
 * Return: 0
 */

int _strlen(char *s)
{
	int len;

	for (len = 0; *s != '\0'; s++, len++);

	return (len);
}
