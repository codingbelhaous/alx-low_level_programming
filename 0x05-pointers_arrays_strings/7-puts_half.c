#include "main.h"

/**
 * puts_half - function that print the half of a sgtring
 *
 * @str: the string to be print
 *
 * Return: void
 */

void puts_half(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	if (i % 2 == 0)
	{
		i = i / 2;
	}
	else
	{
		i = (i + 1) / 2;
	}
	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
