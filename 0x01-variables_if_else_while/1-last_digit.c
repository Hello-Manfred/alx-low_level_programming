#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry into the program
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n, last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	last_digit = n % 10;

	if (last_digit  > 5)
	{
		printf("the last digit of %d is %d and is greater than 5\n", n, last_digit);
	}
	else if (last_digit < 6 && last_digit != 0)
	{
		printf("the last digit of %d is %d and is less than 6 and not equal to 0\n", n, last_digit);
	}
	else if (last_digit == 0)
	{
		printf("the last digit of %d is %d and is equal to zero 0\n", n, last_digit);
	}
	return (0);
}
