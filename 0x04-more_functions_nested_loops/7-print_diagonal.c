#include "main.h"
/**
 * print_diagonal line
 * @n is the number  of time the charachter
 *     should be printed
 */
void print_diagonal(int n)
{
	int postn, spare;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (postn = 1; postn <= n; postn++)
		{
			for (spare = 1; spare <= postn; spare++)
				_putchar('_');
		   _putchar(92);
		   _putchar('\n');
	        }
	}
}
