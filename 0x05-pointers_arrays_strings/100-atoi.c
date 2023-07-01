#include "main.h"

/**
 * _atoi - function that convert a string to an integer
 *
 * @s: string that will be converted
 *
 * Return: the integer
 */

int _atoi(char *s)
{
	int i = 0, j = 0, k = 0, len = 0, f = 0, d = 0;

	while (s[len] != '\0')
		len++;

	while (i < len && f == 0)
	{
		if (s[i] == '-')
			++j;

		if (s[i] >= '0' && s[i] <= '9')
		{
			d = s[i] - '0';
			if (j % 2)
				d = -d;
			k = k * 10 + d;
			f = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			f = 0;
		}
		i++;
	}

	if (f == 0)
		return (0);

	return (k);
}
