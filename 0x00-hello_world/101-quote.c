#include <unistd.h>
/**
 * main - Entry
 *
 * Not using printf or puts functions
 *
 * Return: 0
 */
int main(void)
{
char message[] = "and that piece of art is useful\"\
 - Dora Korpar, 2015-10-19\n";

	size_t length = sizeof(message) - 1;

	write(2, message, length);
	return (1);
}
