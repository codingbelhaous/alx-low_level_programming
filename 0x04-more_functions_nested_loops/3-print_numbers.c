#include <stdio.h>

/**
*print_numbers - print out the numbers from 0 to 9
*
*Return: always 0.
*/

void print_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		_putchar(i);
	}
	_putchar(\n);
}
