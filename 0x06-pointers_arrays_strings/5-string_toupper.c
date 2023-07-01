#include "main.h"

/**
 * upper_char - changes lowercase letters of a string to uppercase
 *
 * @c: character
 *
 * Return: character.
 */

char upper_char(char c)
{
	char cha;

	if (c >= 'a' && c <= 'z')
		cha = c + 'A' - 'a';
	else
		cha = c;
	return (cha);
}

/**
 * string_toupper - changes lowercase letters of a string to uppercase
 *
 * @s: the chaine of caractere
 *
 * Return: character.
 */

char *string_toupper(char *s)
{
	int i = 0;

	while (s[i])
	{
		str[i] = upper(s[i]);
		i++;
	}
	return (s);
}
