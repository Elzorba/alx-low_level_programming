#include "main.h"
/**
 * _strcat:  Write a function that concatenates two strings
 *@c: input 1
 *@c2: input 2
 * return: to thr pointer @dest
 */
char *_strcat(char *dest, char *src)
{
	int c, b;

	c = 0;

	while (dest[c] != '\0')
	{
		c++;
	}
	while (src[b] != '\0')
	{
		dest[c] = src[b];
		c++;
		b++;
	}
	dest[c] = '\0';
	return (dest);
}

