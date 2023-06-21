#include "main.h"
#include <stdio.h>
/**
 *print_to_98 - function that prints natural numbers from n to 98
 *@a: number prompt from the user
 *
 */
void print_to_98(int a)
{
	while (a < 98)
	{
	printf("%d, ", a);
	a++;
	}
	while (a > 98)
	{
	printf("%d, ", a);
	a--;
	}
	printf("98\n");
}
