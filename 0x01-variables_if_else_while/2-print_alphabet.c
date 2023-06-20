#include <stdio.h>
/**
 * main - Entry point
 *
 * description: print alll alphabet letters
 *
 * return: always 0 (success)
*/
int main(void)
{
	char ch = 'a';

         while (ch <= 'z')
        {      
	       putchar(ch);
	       ch++;
	}
	putchar('\n');

	return (0);
}
