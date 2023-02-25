#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Determine whether the number is positive,  negative or zero.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		printf("%d is %s\n", n, "positive");
	}
	else if (n == 0)
	{
		printf("%d is %s\n", n, "zero");
	}
	else if (n < 0)
	{
		printf("%d is %s\n", n, "negative");
	}
	return (0);
}
