#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - function returns a pointer to a new string which
 *  is a duplicate of the string.
 *  @str: String.
 *
 *  Return: returns a pointer to a newly allocated space in memory
 */

char *_strdup(char *str)
{
	int i, len = 0;
	char *dup_str;

	if (str == NULL)
	{
		return (NULL);
	}


	while (str[len] != '\0')
	{
		len++;
	}

	dup_str = (char *)malloc((len + 1) * sizeof(char));

	if (dup_str == NULL)
	{
		return (NULL);
	}

	for (i = 0; i <= len; i++)
	{
		dup_str[i] = str[i];
	}

	return (dup_str);
}
