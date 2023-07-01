#include "main.h"

/**
 * rev_string - a function that revers a string

 * @s: string to be reversed
 *
 * Return: void
 */

void rev_string(char *s)
{
	int i, j, k;
	char c;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	i--;
	j = i;
	k = i / 2;
	i = 0;

	while (i <= k)
	{
		c = s[i];
		s[i] = s[j];
		s[j] = c;
		i++;
		j--;
	}
}
