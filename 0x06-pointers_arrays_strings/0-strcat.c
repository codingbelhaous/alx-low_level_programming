#include "main.h"

/**
 * _strcat - function that concatenates two strings
 *
 * @dest: string
 * @src: string
 *
 * Return: charactre
 */

char	*_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] && dest[i] != '\0')
	{
		i++;
	}
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
