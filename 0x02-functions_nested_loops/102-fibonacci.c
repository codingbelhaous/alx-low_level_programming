#include <stdio.h>
/**
 * main - prints the first 50 Fibonacci numbers
 *
 * Return: void
 */
int main(void)
{
	int q = 0;
	long i = 1, k = 2;

	while (q < 50)
	{
		if (q == 0)
			printf("%ld", i);
		else if (q == 1)
			printf(", %ld", k);
		else
		{
			k += i;
			i = k - i;
			printf(", %ld", k);
		}

		++q;
	}
	printf("\n");
	return (0);
}
