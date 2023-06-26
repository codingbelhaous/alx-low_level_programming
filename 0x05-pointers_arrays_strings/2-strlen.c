#include "main.h"
#include <stddef.h>

/**
 * _strlen - function that return the lenght of a string
 *
 * @s: parameter
 *
 * Return: the lenght of s
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i])
	{
		i++;
	}
	return (i);
}
