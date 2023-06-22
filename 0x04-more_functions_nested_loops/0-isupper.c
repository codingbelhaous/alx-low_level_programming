#include <stdio.h>
/**
 * _isupper - check if the character is upper case.
 *
 * @c : the character to be checked
 *
 * Return: Always 0.
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
