#include <stdio.h>

/**
 * main - entry into the program
 *
 * Description: print alphabet in lowercase, then in uppercase
 * followed by a newline.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char l;
	char u;

	for (l = 'a'; l <= 'z'; l++)
	{
		putchar(l);
	}
	for (u = 'A'; u <= 'Z'; u++)
	{
		putchar(u);
	}
	putchar('\n');

	return (0);
}
