#include "main.h"

/**
 * prime_check - recursively checks if a number is prime
 * @n: the number to check
 * @i: the divisor to check n against
 *
 * Return: 1 if n is prime, 0 otherwise
 */

int prime_check(int n, int i)
{
	if (i == 2)
	{
		return (1);
	}
	if (n % i == 0 && i < n)
	{
		return (0);
	}
	return (prime_check(n, i - 1));
}

/**
 * is_prime_number - checks if a number is prime
 * @n: the number to check
 *
 * Return: 1 if n is prime, 0 otherwise
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (prime_check(n, n / 2));
}
