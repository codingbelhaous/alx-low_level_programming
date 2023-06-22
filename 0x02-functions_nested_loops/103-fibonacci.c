#include <stdio.h>
/**
 * main - Prints the sum of the even-valued terms
 *
 * Return: Void
 */
int main(void)
{
	int a = 0;
	long i = 1, j = 2, s = j;

	while (j + i < 10000)
	{
		j += i;
		if (j % 2 == 0)
			s += j;
		i = j - i;
		++a;
	}
	printf("%ld\n", s);
	return (0);
}
