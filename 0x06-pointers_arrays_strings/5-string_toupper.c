#include "main.h"

/**
 * string_toupper - changes lowercase letters of a string to uppercase
 *
 * @s: the string
 *
 * Return: character.
 */

char *string_toupper(char *c)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 32;
		i++;
	}
	return (s);
}
