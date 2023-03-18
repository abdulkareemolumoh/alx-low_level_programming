#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
for (i = 'z'; i >= 'a'; i--)
{
putchar(i); /* print the character */
}
putchar('\n'); /* print a newline character */
return (0);
}

