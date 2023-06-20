#include <unistd.h>
#include "holberton.h"

/**
 * print out putchar
 *
 * Return: On success 1.
 * 
 */
int _putchar(char b)
{
	return (write(1, &b, 1));
}
