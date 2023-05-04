#include "main.h"

/**
 * binary_to_uint -  converts a binary number to an unsigned int.
 * @b: pointer to a string of 0 and 1 chars
 *
 * Return: the converted number.
 */

unsigned int binary_to_uint(const char *b)
{
	size_t len;
	unsigned int result = 0;
	size_t i;

	if (b == NULL)
	{
		return (0);
	}

	len = strlen(b);
	for (i = 0; i < len; i++)
	{
		char c = b[i];

		if (c == '0')
		{
			result = (result << 1) + 0;
		}
		else if (c == '1')
		{
			result = (result << 1) + 1;
		}
		else
		{
			return (0);
		}
	}
	return (result);
}
