vim #include <stdio.h>
/**
 * main - Print out the sum of all the multiples of 3 or 5 up to 1024
 *
 * Return: 0
 */
int main(void)
{
	int i, j = 0;

	while (i < 1024)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			j += i;
		}

		i++;
	}
	printf("%d\n", j);
	return (0);
}
