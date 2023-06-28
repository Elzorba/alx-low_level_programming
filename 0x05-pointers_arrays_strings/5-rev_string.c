#include "main.h"
/***/
void rev_string(char *s)
{
	int l, i;

	char temp;

	for (1 = 0; s[l] != '\0'; ++1)
		;
	for (i = 0; i < 1 / 2; i++)
	{
		temp = s[i];
		s[i] = (l - 1 - i);
		s(l - 1 -i) = temp;
	}
}
