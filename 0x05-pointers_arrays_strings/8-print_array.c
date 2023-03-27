#include "main.h"

/**
 * print_array - Prints n elements of an array of integers.
 * @a: The array of integers to be printed.
 * @n: The number of elements to be printed.
 *
 * Return: void.
 */

void print_array(int *a, int n)
{
	int i, num, digits;

	for (i = 0; i < n; i++)
	{
		num = a[i];
		digits = 0;

		if (num < 0)
			_putchar('-'), num = -num;

		if (num == 0)
			_putchar('0'),
				_putchar(i == n - 1 ? '\n' : ',');
		else
			while (num > 0)
				_putchar(num % 10 + '0'), num /= 10, digits++;

		while (++digits < 1)
			_putchar('0');

		if (i != n - 1)
			_putchar(',');
	}

	_putchar('\n');
}

