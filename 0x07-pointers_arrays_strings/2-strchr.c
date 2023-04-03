#include "main.h"

/**
 * _strchr - writes a function that locates a character in a string.
 * @s: string
 * @c: Charcter
 *
 * Return: Pointer to first occurance.
 */

char *_strchr(char *s, char c)
{
	for (; *s != '\0'; s++)
	{
		if (*s == c)
		{
			return (s);
		}
	}

	if (c == '\0')
		return (s);


	return (0);
}
