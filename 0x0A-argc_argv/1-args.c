#include <stdio.h>

/**
 * main - Entry Point
 * @argc: argument count.
 *
 *
 * Return: Number of arguments
 */

int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);

	if (argc > 1)
	{
		printf("%s\n", argv[1]);
	}
	return (0);
}
