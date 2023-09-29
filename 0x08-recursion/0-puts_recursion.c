#include "main.h"

/*
 * _puts_recursion - a function like puts that print a string
 *@s : is a pointer string
 * return 0 = success
*/
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
