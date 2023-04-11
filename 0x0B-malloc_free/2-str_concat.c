#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concat strings
 * @s1: string 1.
 * @s2: string 2.
 *
 * Return: Zero.
 */

char *str_concat(char *s1, char *s2)
{
	int len_s1 = 0, len_s2 = 0, i;
	char *result;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[len_s1] != '\0')
	{
		len_s1++;
	}
	while (s2[len_s2] != '\0')
	{
		len_s2++;
	}
	result = malloc((len_s1 + len_s2 + 1) * sizeof(char));
	if (result == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len_s1; i++)
	{
		result[i] = s1[i];
	}
	for (i = 0; i < len_s2; i++)
	{
		result[len_s1 + i] = s2[i];
	}
	result[len_s1 + len_s2] = '\0';
	return (result);
}

