#include <unistd.h>

/**
 * main - Entry point of a program
 *
 * Return: -Always returns a 1
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
