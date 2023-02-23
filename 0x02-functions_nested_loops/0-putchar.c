#include "main.h"
/**
 * main - entry into the program
 *
 * description - prints the message _putchar
 *
 * Return: Always 0 (Success)
 */

int main(void) 
{
	int my_str[] = {95, 112, 117, 116, 99, 104, 97, 114};
	int size;
	int count;

	size = sizeof(my_str) / sizeof(int);

	for (count = 0; count < size; count++)
	{
		_putchar(my_str[count]);
	}

	_putchar('\n');
	return (0);
}
