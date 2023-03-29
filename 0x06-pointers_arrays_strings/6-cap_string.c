#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @str: The string to modify.
 *
 * Return: A pointer to the modified string.
 */

char *cap_string(char *str)
{
	int i, j;
	char separators[] = " \t\n,;.!?\"(){}";

	if (*str == '\0')
	{
		return (str);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i == 0 || str[i - 1] == '\0' || str[i - 1] == '\n'
				|| str[i - 1] == '\t' || str[i - 1] == ' ')
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] = str[i] - 'a' + 'A';
			}
		}
		else
		{
			for (j = 0; j < 14; j++)
			{
				if (str[i - 1] == separators[j])
				{
					if (str[i] >= 'a' && str[i] <= 'z')
					{
						str[i] = str[i] - 'a' + 'A';
					}
				}
			}
		}
	}

	return (str);
}
