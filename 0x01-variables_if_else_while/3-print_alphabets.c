#include <stdio.h>

/**
 * Main - intry point
 *
 * description: print from a to z ubber and lower
 *
 * Return : always 0 ( success)
*/

int main(void)
{

	char ch ='a';
	char CH ='A';

	/*prints a-z*/
	
	while (ch <= 'z')
{
	putchar(ch);
	ch++; 
}          
        /* print A - Z*/
        while (CH <= 'Z')
{
	putchar(CH);
	CH++;
}
        return (0);
	}
