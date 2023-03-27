#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * positive_or_negative - entry point.
 * @i: Integer variable used to store a counter value for the loop.
 *
 * Return: 0
 */
void positive_or_negative(int i)
{
	srand(time(0));
	i = rand() - RAND_MAX / 2;
	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else if (i < 0)
	{
		printf("%d is negative\n", i);
	}
	else
	{
		printf("%d is zero\n", i);
	}
	return ;
}
