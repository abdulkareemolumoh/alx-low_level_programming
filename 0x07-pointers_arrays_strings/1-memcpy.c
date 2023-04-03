#include "main.h"

/**
 * _memcpy - Writes a function that copies memory area.
 * @dest: Dsetinaion
 * @src: source
 * @n: no of bytes
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
