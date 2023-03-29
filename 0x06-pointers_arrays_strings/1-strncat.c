#include "main.h"

/**
 * _strncat - concetenates two strings
 * @dest: Destination string
 * @src: Source destination
 * @n: Integer
 * Return: Resulting Pointer
 */

char *_strncat(char *dest, char *src, int n)
{
	int dest_len;
	int i;

	for (dest_len = 0; dest[dest_len] != '\0'; dest_len++)
	{
	}

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[dest_len + i] = src[i];
	}

	dest[dest_len + n + 1] = '\0';

	return (dest);
}
