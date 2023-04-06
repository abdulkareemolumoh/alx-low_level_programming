#include "main.h"

/**
 * is_prime_number - function that returns 1 if the input integer is a prime
 * @n: integer
 *
 * Return: 1 || 0
 */

int is_prime_number(int n)
{
	int i = 5;
	int w = 2;

	if (n < 2)
	{
		return (0);
	}

	if (n == 2 || n == 3)
	{
		return (1);
	}

	if (n % 2 == 0 || n % 3 == 0)
	{
		return (0);
	}

	while (i * i <= n)
	{
		if (n % i == 0)
		{
			return (0);
		}
		i += w;
		w = 6 - w;
	}

	return (1);
}
