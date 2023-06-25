#include <stdio.h>
/**
 * main - Print out the numbers
 *
 * Return: 0 (success)
 *
*/
int main(void)
{
	int i;
	int j;


	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (i < j && i != j)
			{
				putchar(i + '0');
				putchar(j + '0');

				if (i != 8 || j != 9)
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
