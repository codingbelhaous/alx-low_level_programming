#include "main.h"

/**
 * puts2 - function that print out every other charactre
 *
 * @str: the string to be print out
 *
 * Return: void
 */

void puts2(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (i % 2 == 0)
			_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
