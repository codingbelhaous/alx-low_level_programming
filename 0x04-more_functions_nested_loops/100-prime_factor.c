#include <stdio.h>
#include <math.h>

/**
 * main - finds and prints the largest prime factor of the number 612852475143
 *
 * Return: 0 Success
 */
int main(void)
{
	long int nb;
	long int max;
	long int j;

	nb = 612852475143;
	max = -1;

	while (nb % 2 == 0)
	{
		max = 2;
		nb /= 2;
	}

	for (j = 3; j <= sqrt(nb); j = j + 2)
	{
		while (nb % j == 0)
		{
			max = j;
			nb = nb / j;
		}
	}

	if (nb > 2)
		max = nb;

	printf("%ld\n", max);

	return (0);
}
