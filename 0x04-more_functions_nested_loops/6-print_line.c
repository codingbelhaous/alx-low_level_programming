#include "main.h"

/**
 * print_line - print out a straight line in the terminal
 *
 * Return: void
 */

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i = n - 1; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
