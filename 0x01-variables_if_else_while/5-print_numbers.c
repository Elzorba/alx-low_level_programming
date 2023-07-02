#include <stdio.h>

/**
 * main - entry point
 *
 * description - print digit from 0 to 9
 *
 * return - always 0 (success)
*/

int main(void) 
{
	int digit = 0;

	while (digit <= 9)
	{
         printf ("%d", digit);
		digit++;
	}
         printf ("\n");
        return (0);
}
