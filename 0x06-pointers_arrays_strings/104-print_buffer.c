#include "main.h"
#include <stdio.h>

/**
 *print_buffer - function print a buffer
 *
 *@b: Buffer pointer
 *@size: Number of characters
 *
 */

void print_buffer(char *b, int size)
{
	int i, k, j;

	if (size <= 0)
		printf("\n");
	else
	{
		for (i = 0; i < size; i += 10)
		{
			printf("%.8x:", i);
			for (k = i; k < i + 10; k++)
			{
				if (k % 2 == 0)
					printf(" ");
				if (k < size)
					printf("%.2x", *(b + k));
				else
					printf("  ");
			}
			printf(" ");
			for (j = i; j < i + 10; j++)
			{
				if (j >= size)
					break;
				if (*(b + j) < 32 || *(b + j) > 126)
					printf("%c", '.');
				else
					printf("%c", *(b + j));
			}
			printf("\n");
		}
	}
}
