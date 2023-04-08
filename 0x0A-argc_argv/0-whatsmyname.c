#include <stdio.h>
#include <string.h>

/**
 * main - program that prints its name, followed by a new line.
 * @argc: argument count
 * @argv: argument vector
 * @*name: name of program
 *
 * Return: no of arg
 */

int main(int argc, char *argv[])
{
	char *name;

	if (argc > 0)
	{
		name = argv[0];
	}
	else
	{
		name = "unkown";
	}
	printf("%s\n", name);

	return (0);
}
