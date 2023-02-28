#include <stdio.h>

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

	for (i = '0'; i <= '9'; i++)
	{
		for (x = '0'; x <= '9'; x++)
		{
			if (i < x)
			{
				putchar(i);
				putchar(x);

				if (i != '8' || (i == '8' && i != '9'))
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
