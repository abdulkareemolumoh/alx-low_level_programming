#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: argument count.
 * @argv: argument vector.
 *
 * Return: Zero
 */

int main(int argc, char *argv[])
{
	int first_argument = atoi(argv[1]);
	int second_argument = atoi(argv[2]);
	int product = first_argument * second_argument;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", product);

	return (0);
}
