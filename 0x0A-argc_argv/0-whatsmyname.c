#include <stdio.h>
#include <string.h>

/**
 * main - program that prints its name, followed by a new line.
 * @argc: argument count
 * @argv: argument vector
 * @i: use to iterate the string
 *
 * Return: no of arg
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
