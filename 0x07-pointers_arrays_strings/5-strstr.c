#include "main.h"

/**
 *_strstr - Write a function that locates a substring.
 * @haystack: string
 * @needle: String
 *
 * Return: pointer to the beginning of the located substring
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j, k;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0])
		{
			for (j = i, k = 0; needle[k] != '\0' && haystack[j] != '\0'; j++, k++)
				;
			if (needle[k] == '\0')
				return (&haystack[i]);

		}

	}
	return (0);
}
