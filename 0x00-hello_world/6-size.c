#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return - Always returs a 0
 */
int main(void)
{
	int i;
	long int b;
	long long int d;
	char c;
	float f;

	printf("Size of a int: %lu byte(s)\n", (unsigned long)sizeof(i));
	printf("Size of an char: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(b));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(d));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
	
	return (0);
}
