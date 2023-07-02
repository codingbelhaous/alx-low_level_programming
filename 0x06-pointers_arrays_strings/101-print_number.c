#include "main.h"
/**
 * print_number - function that prints an integer
 *
 * @n: number
 *
 * Return: void
 */

void print_number(int n)
{
	int i, j, d = 0, ds, p;
	unsigned int t, num, number;

	if (n < 0)
	{
		_putchar('-');
		t = -n;
	}
	else
	{
		t = n;
	}

	number = t;

	while (number >= 10)
	{
		number = number / 10;
		d++;
	}
	ds = d + 1;
	p = 1;
	i = 1;

	while (i < ds)
	{
		p = p * 10;
		i++;
	}
	j = p;
	while (j >= 1)
	{
		num = (t / j) % 10;
		_putchar(num + '0');
		j = j / 10;
	}
}
