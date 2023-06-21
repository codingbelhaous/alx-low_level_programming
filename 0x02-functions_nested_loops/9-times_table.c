#include "main.h"
/**
 * times_table - function the numbers
 *
 * table repated 9 times, starting with 0
 *
 * Return: void
 */
void times_table(void)
{
	int a, b, c, U, T;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			c = a * b;

			if (c > 9)
			{
				U = c % 10;
				T = (c - U) / 10;
				_putchar(44);
				_putchar(32);
				_putchar(T + '0');
				_putchar(U + '0');
			}
			else
			{
				if (b != 0)
				{
					_putchar(44);
					_putchar(32);
					_putchar(32);
				}

				_putchar(c + '0');
			}
		}
		_putchar('\n');
	}
}
