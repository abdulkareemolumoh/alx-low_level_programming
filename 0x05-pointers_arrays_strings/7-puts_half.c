#include "main.h"

/**
 * puts_half - prints half of a string,
 * @str: A string
 *
 * Return: 0
 */

void puts_half(char *str)
{
	int len = 0, n, i;
	char *p = str;

	while (*p != '\0')
	{
		len++;
		p++;
	}

	n = (len + 1) / 2;

	for (i = n; i < len; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
