#include "main.h"
#include <stdio.h>

/**
 * main - print out the numbers from 1 to 100
 * But for multiples of three prints Fizz instead of the number
 * and for the multiples of five prints Buzz
 * Return: 0 Success
 */
int main(void)
{
	int K;

	for (K = 1; K <= 100; K++)
	{
		if (K % 3 == 0 && K % 5 != 0)
		{
			printf(" Fizz");
		} else if (K % 5 == 0 && K % 3 != 0)
		{
			printf(" Buzz");
		} else if (K % 3 == 0 && K % 5 == 0)
		{
			printf(" FizzBuzz");
		} else if (K == 1)
		{
			printf("%d", K);
		} else
		{
			printf(" %d", K);
		}
	}
	printf("\n");

	return (0);
}
