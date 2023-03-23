#include <stdio.h>
#include "main.h"

/**
 * print_line - Draws a straight line in the terminal
 * @n: The number of times the _ character should be printed
 *
 * Return: void
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
