#include <stdio.h>
/**
 * main - print out the alphabet in lowercase except q and e
 *
 * Return: 0
 */

int main(void)
{
	char c;

	for (c = 97; c <= 122; c++)
	{
		if (c != 101 && c != 113)
		{
			putchar(c);
		}
	}
	putchar('\n');
	return (0);
}
