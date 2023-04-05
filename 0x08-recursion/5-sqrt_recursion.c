#include "main.h"

/**
 * _sqrt_helper - helper function to compute the natural square root of a no.
 * @n: integer.
 * @root: current guess for the square root.
 *
 * Return: natural square root of a number, or -1 if n does not have a natural
 * square root.
 */
int _sqrt_helper(int n, int root)
{
	if (n == root * root)
		return (root);
	if (n < root * root)
		return (-1);
	return (_sqrt_helper(n, root + 1));
}

/**
 * _sqrt_recursion - function that returns the natural square root of a number.
 * @n: integer.
 *
 * Return: natural square root of a number, or -1 if n does not have a natural
 * square root.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt_helper(n, 0));
}

