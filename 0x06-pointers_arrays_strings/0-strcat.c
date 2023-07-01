#include "main.h"

/**
 * _strncat - a function that concatenates two strings
 *
 * @dest: string
 * @src: string
 * @n: number
 *
 * Return: character
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i])
	{
		i++;
	}
	while (src[j] && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
