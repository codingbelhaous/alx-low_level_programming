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
	char c;
	int i;
	long int li;
	long long int lli;
	float f;
	pritnf("Size of a char: %zu byte(s)\n", sizeof(c));
	pritnf("Size of an int: %zu byte(s)\n", sizeof(i));
	pritnf("Size of a long int: %zu byte(s)\n", sizeof(li));
	pritnf("Size of a long long int: %zu byte(s)\n", sizeof(lli));
	pritnf("Size of a float: %zu byte(s)\n", sizeof(f));
	return (0);
}
