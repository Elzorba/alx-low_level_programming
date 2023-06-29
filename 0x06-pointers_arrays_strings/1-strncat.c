#include "main.h"
/**
 * *_strncat : a function to concatenates to strings
 *
 * @c: pointerto input
 * @i: pointer to input
 *
 * return: @dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int c, i;
	int c = 0;

	while (dest[c])
		c++;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[c + i] = src[i];
	dest[c + i] = '\0';

	return (dest);
}
