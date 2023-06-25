#include <stdio.h>
/**
 * main - print out the numbers of base 10 starting from 0 using int variable
 * end seperqted by ,
 *
 * Return: 0
 */

int main(void)
{
	int c;

	for (c = 0; c < 10; c++)
	{
		putchar(c + '0');
		if (c < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
