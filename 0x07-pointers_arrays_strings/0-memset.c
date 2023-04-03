#include "main.h"

/**
 *_memset - Writes a function that fills memory with a constant byte.
 **@s: Pointer to the memory area
 *@b: constant byte
 *@n: no of bytes to be filled
 *
 *Return: Pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
