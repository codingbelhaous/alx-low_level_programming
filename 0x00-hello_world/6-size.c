#include <stdio.h>
/**
 * main - Entry
 *
 * using print out the sizeof data types
 *
 * Return: 0
 */
int main(void)
{
	pritnf("Size of a char: %lu byte(s)\n", sizeof(char));
	pritnf("Size of an int: %lu byte(s)\n", sizeof(int));
	pritnf("Size of a long int: %lu byte(s)\n", sizeof(long int));
	pritnf("Size of a long long int: %lu byte(s)\n", sizeof(long long int));
	pritnf("Size of a float: %lu byte(s)\n", sizeof(float));
	return (0);
}
