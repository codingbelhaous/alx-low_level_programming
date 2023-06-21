#include "main.h"

/**
 * _isalpha - check if char c isalpha
 *
 *@c: the char that we're gonna check
 *
 * Return: 1 if c is a letter 0 if it's not
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
	_putchar('\n');
}
