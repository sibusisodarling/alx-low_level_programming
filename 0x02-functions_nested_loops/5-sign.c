#include <stdio.h>
#include "main.h"
/**
 * print_sign - Checks the code
 * @n: An input number
 * Description: Tohis function prints the sign of the number
 * Return: 1 if number is positive, o if number is 0, or
 * -1 if number is negative
 */
int print_sign(int n)
{
	int a;

	if (n > 0)
	{
		a = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		a = 0;
		_putchar('0');
	}
	else
	{
		a = -1;
		_putchar('-');
	}
	return (a);
}
