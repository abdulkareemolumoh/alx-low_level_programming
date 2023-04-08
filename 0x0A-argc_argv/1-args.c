#include <stdio.h>
#include <string.h>

/**
 * main - Entry Point
 * @argc: argument count.
 * @argv: argument vector.
 *
 * Return: Number of arguments
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%d: %s\n", i, argv[i]);
	}
	return (0);
}
