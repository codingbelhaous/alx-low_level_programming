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
    printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(char));
    printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(int));
    printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeo(long int));
    printf("Size of a long long int: %llu byte(s)\n", (unsigned long)sizeof(long long int));
    printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(float));
    return (0);
}
