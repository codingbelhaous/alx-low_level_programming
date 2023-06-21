#include "main.h"

/**
 *_islower - check if c is lower
 *
 *c is the char that will be checked
 *
 *Return: 1 if c is lowercase 0 if it's not
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
