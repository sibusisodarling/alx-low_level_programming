#include "main.h"
/**
 * print_alphabet_x10 - Check Description
 * Description: function prints alphabet in lowercase 10 times
 * Return: Always return 0.
 */
void print_alphabet_x10(void)
{
	int j;
	char i;

	for (j = 0; j <= 9; j++)
	{
		for (i = 'a'; i <= 'z'; i++)
			_putchar(i);
		_putchar('\n');
	}
}
