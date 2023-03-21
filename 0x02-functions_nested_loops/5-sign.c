#include "main.h"

/**
 * print_sign - Prints the sign of a number
 * @n: integer to be chacekd
 *
 * Return: 1 if n is greater than zero, 0 if n is zero, -1 if n
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
