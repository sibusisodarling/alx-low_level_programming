#include <stdio.h>
/**
 * main - Entry point
 *
 * return: -Always returns 0
 */
int main(void)
{
    int i;
    int j;
    
    for (j = '0'; j <= '9'; j++)
    {
	putchar(j);
    }	
    for (i = 'a'; i <= 'f'; i++)
    {
        putchar(i);
    }
    putchar('\n');
    return (0);
}
