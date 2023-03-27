#include "main.h"

/**
 * _strcpy - Copies the string pointed to by src, including the
 *            terminating null byte, to the buffer pointed to by dest.
 *
 * @dest: A pointer to the destination buffer.
 * @src: A pointer to the source string.
 *
 * Return: A pointer to the destination buffer.
 */
char *_strcpy(char *dest, char *src)
{
	char *p = dest;

	while (*src != '\0')
	{
		*p = *src;
		p++;
		src++;
	}

	*p = '\0';

	return (dest);
}

