#include <stdio.h>
/**
 * main - print out the numbers of base 16 starting from 0
 *
 * Return: 0
 */

int main(void)
{
	char c;

	for (c = 0; c <= 9; c++)
	{
		putchar(c + '0');
	}
	for (c = 97; c <= 102; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
