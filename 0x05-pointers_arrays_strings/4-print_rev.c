#include "main.h"
/**
 * print_rev: printg a reversed string followed by new line. 
 *
 * @s : pointer to string print.
 *
 * return : void.
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	while (i--)
	{
		_putchar(s[i]);
	}
	        _putchar('\n');
}
