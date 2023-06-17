#include <stdio.h>

/**
 *Main : entry level
 *
 *Description : a C prgram that prits with printf function
 *
 *Return : always 0 (success)
*/

int main(void)
{
	printf("size of a chart:%lu byte(s)\n", sizeof(char));
	printf("size of an:%lu byte(s)\n", sizeof(int));
	printf("size of a long int:%lu byte(s)\n", sizeof(long int));
	printf("size of a long long int:%lu byte(s)\n", sizeof(long long int));
	printf("size of a float:%lu byte(s)\n", sizeof(float));
	return (0);

}
