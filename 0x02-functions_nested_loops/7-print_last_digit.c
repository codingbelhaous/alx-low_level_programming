#include "main.h"

/**
 * print_last_digit : function that print out the last digit of a number
 *
 * Return : return the last digit of the number prompt
 *
 */

int print_last_digit(int n)
{
	int i;
	
	i = n % 10;
	if (i < 0)
	{
	 	i = i * -1;
	}
	_putchar(i + '0');

	return (n % 10);
}
