#include <stdio.h>

/**
 * argc - argument count
 * argv - argument vector
 * @i: number of argument passed
 *
 * return: no of arg
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return 0;
}
