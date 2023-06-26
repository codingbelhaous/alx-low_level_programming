#include "main.h"

/**
 * _puts - function that print out a string
 *
 * @s: parameter
 *
 * Return: void
 */

int _strlen(char *s)
{
	int i = 0;
	while(s[i])
	{
		_putchar(s[i]);
		i++;
	}
	_putchar('\n');       
}
