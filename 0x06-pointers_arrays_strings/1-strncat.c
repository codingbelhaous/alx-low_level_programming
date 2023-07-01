#include "main.h"

/**
 * _strncat - function that concatenates two strings
 *
 * @dest: string
 * @src: string
 * @n :b ytes from src
 *
 * Return: charactre
 */

char *_strncat(char *dest, char *src, int n)
{
	int a = 0;
	int b = 0;

	while (dest[a])
	{
		a++;
	}
	while (src[b] && b < n)
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}
