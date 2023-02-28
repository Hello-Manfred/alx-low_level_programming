#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * main - entry into the program
 *
 * Description: prints all possible different
 * combinations of two digits
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i, x;

	for (i = 48; i < 58; i++)
	{
		for (x = 49; x < 58; x++)
		{
			if (i < x)
			{
				putchar(i);
				putchar(x);

				if (i != 56 || x != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
