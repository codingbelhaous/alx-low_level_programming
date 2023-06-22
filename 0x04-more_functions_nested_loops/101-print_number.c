#include "main.h"

/**
 * print_number - print out an integer
 * @n: integer to be printed
 */
void print_number(int n)
{
	unsigned int b;

	if (b < 0)
	{
		b = -n;
		_putchar('-');
	} else
	{
		b = n;
	}

	if (b / 10)
	{
		print_number(b / 10);
	}

	_putchar((b % 10) + '0');
}
