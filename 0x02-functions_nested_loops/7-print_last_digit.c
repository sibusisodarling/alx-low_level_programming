#include "main.h"
/**
 * print_last_digit - Checks the code
 * @i: An integer input
 * Description: This function prints the last digit of a number
 * Return: last digit of number i
 */
int print_last_digit(int i)
{
	int j;

	if (i < 0)
		j = -1 * (i % 10);
	else
		j = i % 10;

	_putchar((j % 10) + '0');
	return (j % 10);
}
