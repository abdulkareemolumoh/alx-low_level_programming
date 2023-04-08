#include <stdio.h>

/**
 * main - Entry Point
 * @argc: argument count.
 * @argv: argument vector
 *
 * Return: Number of arguments
 */

int main(int argc, char *argv[])
{
	(void)argv;

	if (argc > 1)
	{
		printf("%d\n", argc - 1);
	}
	return (0);
}
