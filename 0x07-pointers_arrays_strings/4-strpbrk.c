#include "main.h"

/**
 * _strpbrk - Write a function that searches a string for any a set of bytes.
 * @s: string
 * @accept: string to cpmare
 *
 * Return: pointer to byte n
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (&(s[i]));
			}
		}
	}
	return (0);
}
