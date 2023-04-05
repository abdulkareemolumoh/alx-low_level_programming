#include "main.h"

/**
 * factorial - Returns factotaial of a given number
 * @n: Given number
 *
 * Return: factotial
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
