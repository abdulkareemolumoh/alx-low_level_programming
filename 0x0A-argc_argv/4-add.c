#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Adds positive numbers.
 * @argc: The number of command line arguments.
 * @argv: An array of strings containing the command line arguments.
 *
 * Return: 0 if the addition was successful, 1 otherwise.
 */

int main(int argc, char *argv[])
{
	int total = 0, i, j;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}


	for (i = 1; i < argc; i++)
	{
		char *arg = argv[i];


		for (j = 0; arg[j] != '\0'; j++)
		{
			if (!isdigit(arg[j]))
			{
				printf("Error\n");
				return (1);
			}
		}


		total += atoi(arg);
	}


	printf("%d\n", total);

	return (0);
}

