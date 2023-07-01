#include "main.h"

/**
 * print_rev - function that print a string in reverse
 *
 * @s: the string to br reversed
 *
 * Return: void
 */

void print_rev(char *s)
{
	int i;

	i=0;

	while (s[i] != '\0')
	{
		i++;
	}
	i--;
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
