#include "main.h"
#include <stdio.h>
/**
 * main entry point
 *
 * description - making - putchar
 *
 * return always 0 succes
*/

int main(void)
{
	char str[] = "_putchar";
	int ch;

	for (ch = 0; ch < 8; ch++)
		putchar(str[ch]);
		putchar('\n');
	return (0);
}
