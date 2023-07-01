#include "main.h"

/**
 * reverse_array - function that reverses the content of an array of integers
 *
 * @a: pointer to tab of integer
 * @n: number
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i = 0, j, k, c;

	j = n - 1;
	k = j / 2;

	while (i <= k)
	{
		c = a[i];
		a[i] = a[j];
		a[j] = c;
		i++;
		j--;
	}
}
