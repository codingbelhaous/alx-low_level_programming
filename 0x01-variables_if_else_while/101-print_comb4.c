#include <stdio.h>

/**
 * main - print numbers
 *
 * Return: 0
 */
int main(void)
{
	int a;
	int b;
	int c;

	for (a = 48; a < 56; a++)
	{
		for (b = a + 1; b < 57; b++)
		{
			for (c = b + 1; b < 58; b++)
			{
				putchar(a;
				putchar(b);
				putchar(c);
				if (a != 55 || b != 56 || c != 57)
				{
					putchar(',');
					putchar(' ');
				}	
			}
		}
	}
	putchar('\n');
	return (0);
}
