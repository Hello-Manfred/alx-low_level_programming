#include <stdio.h>

/**
 * main - entry into the program
 *
 * Description: print single digit numbers starting from 0
 * followed by a newline
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	for (i = 0; i < 10; i++)
	{
		printf("%d", i);
	}
	putchar('\n');

	return (0);
}
