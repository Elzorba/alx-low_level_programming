#include <stdio.h>

/**
 * main - entry point
 *
 * description - print a script that print from 0 to 9 by putchar
 *
 * return - always 0 (success)
*/

int main(void)
{
	int digit = 0;

	while ( digit <= 9)
	{
		putchar(digit + '0');
		digit++;

	}
	putchar('\n');
	return (0);
}

