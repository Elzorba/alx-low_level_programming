#include <stdio.h>

/**
 * main - entry point
 *
 * description - print lower cast by whille
 *
 * return - alway 0 success
*/

int main(void)
{
	char ch = 'z';
	while (ch >= 'a')
	{
		putchar(ch);
			ch--;
	}
	putchar('\n');
		return (0);
}
