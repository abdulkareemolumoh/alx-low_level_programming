#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0
 */

int main(void)
{
char x, y;

for (x = 'a', y = 'A'; x <= 'z' && y <= 'Z'; x++, y++)
{
	putchar(x);
	putchar(y);
	putchar('\n');
}
		return (0);
}
