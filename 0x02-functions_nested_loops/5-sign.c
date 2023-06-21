#include "main.h"

/**
 
 * print_sign - function that prints out the sign of the number prompt
 *
 * @n: number to be checkd
 *
 * Return: 1 if n is positive, 0 if n is equal zero -1 if it's negative
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}

	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar ('-');
		return (-1);
	}
	_putchar('\n');
}
