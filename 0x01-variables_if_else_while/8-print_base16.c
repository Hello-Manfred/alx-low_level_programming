#include <stdio.h>

/**
 * main - entry into the program
 *
 * Description: prints all base 16 numbers in lowercase,
 * followed by a new line.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char i;
	char hx;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}
	for (hx = 'a'; hx <= 'f'; hx++)
	{
		putchar(hx);
	}
	putchar('\n');

	return (0);

}
