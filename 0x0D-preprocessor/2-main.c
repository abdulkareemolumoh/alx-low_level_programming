#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints the name of the file it was compiled from
 * using the __FILE__ macro, followed by a newline.
 *
 * Return: 0 (Success)
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return 0;
}

