#include "main.h"

/**
 * reverse_array - function that reverses the content of an array of integers
 *
 * @a: pointer to tab of integer
 * @n: number
 */

void reverse_array(int *a, int n)
{
	int i = 0, t, k;
	int c;

	t = n - 1;
	k = t / 2;

	while (i <= k)
	{
		c = a[i];
		a[i] = a[t];
		a[t] = c;
		i++;
		t--;
	}
} * Return: void
 */


