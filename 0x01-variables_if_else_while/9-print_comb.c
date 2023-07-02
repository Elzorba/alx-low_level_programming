#include <stdio.h>
/**
 * main - intry point print digist using putchar
 * return : 0
 */
int main(void)
{
	int digit = 0;

	 while (digit <= 9)
	 {
	 putchar(digit + 48);
         putchar(',');
	 putchar(' ');
	 digit++;
	 }
putchar('\n');
return (0);
}
