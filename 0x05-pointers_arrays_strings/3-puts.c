#include "main.h"

/**
 * _puts - function that print out a string
 *
 * @str : parameter
 *
 * Return: void
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
