#include <stdio.h>

/**
 * _isupper - checks for uppercase character.
 *@c: cahracter to check
 *
 * Return: 0 (success)
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
