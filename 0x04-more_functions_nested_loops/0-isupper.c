#include <stdio.h>
/**
 * _isupper - check if the character is upper case.
 *
 * @c : the character to be checked
 *
 * Return: 1 if c is upper and 0 if it's not.
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
