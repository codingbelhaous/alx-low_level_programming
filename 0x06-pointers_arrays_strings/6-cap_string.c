#include "main.h"

/**
 * cap_string - function that capitalizes all words of a string
 *
 * @c: string
 *
 * Return: String 
 */

char *cap_string(char *c)
{
	int i = 0, j;
	int k[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	while (*(c + i) != '\0')
	{
		if (*(c + i) >= 'a' && *(c + i) <= 'z')
		{
			if (i == 0)
			{
				*(c + i) = *(c + i) - 32;
			}
			else
			{
				for (j = 0; j <= 12; j++)
				{
					if (k[j] == *(c + i - 1))
					{
						*(c + i) = *(c + i) - 32;
					}
				}
			}
		}
	i++;
	}
	return (c);
}
