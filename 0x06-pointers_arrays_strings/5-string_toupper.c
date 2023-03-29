#include "main.h"

/**
 * *string_toupper - changes all lowercase letters of a string to uppercase
 * @str: string
 * Return: uppercase
 */

char *string_toupper(char *str)
{
	int i;

	if (*str ==  '\0')
	{
		return (str);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 'a' + 'A';
		}
	}
	return (str);
}
