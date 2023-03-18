#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
for (i = 0; i < 10; i++)
{
putchar(i + '0'); /* print the digit */
}
for (i = 'a'; i <= 'f'; i++)
{
putchar(i); /* print the character */
}
putchar('\n'); /* print a newline character */
return (0);
}

