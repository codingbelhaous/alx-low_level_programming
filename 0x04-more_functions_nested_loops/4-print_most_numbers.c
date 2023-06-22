#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - print out the numbers 0 to 9 and not 2 or 4
 *
 * Return: Always 0.
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i == 2 || i == 4)
		{
			_putchar(i + 1 + '0');
		}
		else
		{
			_putchar(i + '0');
		}
}
