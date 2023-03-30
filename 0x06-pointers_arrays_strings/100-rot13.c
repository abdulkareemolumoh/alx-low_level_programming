#include "main.h"

/**
 *  * rot13 - Encodes a string using ROT13 cipher
 *   * @s: Pointer to the string to be encoded
 *    *
 *     * Return: Pointer to the encoded string
 */
char *rot13(char *s)
{
	char *p = s;
	int i, j;
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if ((s[i] >= 'a' && s[i] <= 'z' && s[i] - 'a' == j) ||
					(s[i] >= 'A' && s[i] <= 'Z' && s[i] - 'A' + 26 == j))
			{
				s[i] = rot13[j];
				break;
			}
		}
	}

	return (p);
}

