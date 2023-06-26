#include "main.h"

/**
 * swap_int - function that swap two numbers
 *
 * @a: parameter
 * @b: parameter
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
