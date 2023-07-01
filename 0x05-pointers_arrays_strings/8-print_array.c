#include<stdio.h>

/**
 * print_array - function that print n element of an array
 *
 * @a: the pointer to the array
 * @n: the number of element of the array
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	i = 0;
	if (n > 0)
	{
		while (i < n - 1)
		{
			printf("%d, ", a[i]);
			i++;
		}
		printf("%d", a[i]);
	}
	printf("\n");
}
