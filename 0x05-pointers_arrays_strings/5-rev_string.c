#include "main.h"

/**
 * rev_string -  reverses a string.
 * @s: integer
 *
 * Return: 0
 */

void rev_string(char *s)
{
	int len = 0;
	int i;
	char temp;

	/* Calculate the length of the string */
	while (s[len] != '\0')
		len++;

	/* Swap characters from both ends of the string */
	for (i = 0; i < len / 2; i++)
	{
		temp = s[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] = temp;
	}
}
