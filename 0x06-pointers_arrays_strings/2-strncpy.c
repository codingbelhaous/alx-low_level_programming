#include "main.h"

/**
 * _strncpy - function that concatenates two strings
 *
 * @dest: string
 * @src: string
 * @n : number
 *
 * Return: charactre
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
