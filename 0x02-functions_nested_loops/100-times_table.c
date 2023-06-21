#include "main.h"
/**
 * print_times_table - function that print out n times table starting with 0
 *
 * @a: number prompt from the user
 */
void print_times_table(int a)
{
int i, j, k;

	if (a >= 0 && a <= 14)
	{
		for (i = 0; i <= a; i++)
		{
			for (j = 0; j <= a; j++)
			{
				k = i * j;
				if (k > 99)
				{
					_putchar(',');
					_putchar(32);
					_putchar((k / 100) + '0');
					_putchar(((k / 10) % 10) + '0');
					_putchar((k % 10) + '0');
				}
				else if (k > 9)
				{
					_putchar(',');
					_putchar(32);
					_putchar(32);
					_putchar(((k / 10) % 10) + '0');
					_putchar((k % 10) + '0');
				}
				else
				{
					if (j != 0)
					{
						_putchar(',');
						_putchar(32);
						_putchar(32);
						_putchar(32);
					}
					_putchar(k + '0');
				}
			}
			_putchar('\n');
		}
	}
}
