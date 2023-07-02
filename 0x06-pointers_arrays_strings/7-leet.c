#include "main.h"

/**
 * leet - function that encodes a string into 1337
 *
 * @c: string
 *
 * Return: String
 */

char *leet(char *c)
{
	char a[] = "aeotlAEOTL";
	char b[] = "4307143071";
	int i, j;

	i = 0;
	while (*(c + i) != '\0')
	{
		for (j = 0; j <= 9; j++)
		{
			if (*(c + i) == a[j])
			{
				*(c + i) = b[j];
			}
		}
		i++;
	}
	return (c);
}
