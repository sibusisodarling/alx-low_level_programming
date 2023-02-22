#include "main.h"
/**
 * _islower - Checks the code
 * @c: An input character
 * Description: function checks for lowercase
 * Return: 1 if is lowercase or 0 if is uppercase
 */
int _islower(int c)
{
	char i;
	int lowercase = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
			lowercase = 1;
	}
	return (lowercase);
}
