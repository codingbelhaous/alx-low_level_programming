#include "main.h"

/**
 * rot13 - function that encodes a string using rot13
 *
 * @str: string
 *
 * Return: String
 */

char *rot13(char *str)
{
	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char swx[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i, j;

	i = 0;
	do
	{
		for (j = 0; j <= 51; j++)
		{
			if (*(str + i) == a[j])
			{
				*(str + i) = swx[j];
				break;
			}
		}
		i++;
	} while (*(str + i) == '\0')
	return (str);
}
