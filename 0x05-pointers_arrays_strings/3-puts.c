#include "main.h"
/**
 * _puts - print a string followed by new line at stdout
 *
 * str: string is a parametar input
 *
 * return: nothing
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		 _putchar(*str + 0);
		 str++;

	}
	_putchar ('\n');
}
