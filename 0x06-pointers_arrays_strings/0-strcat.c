#include "main.h"
/**
 * _strcat:  Write a function that concatenates two strings
 *@c: input 1
 *@c2: input 2
 * return: to thr pointer @dest
 */
char *_strcat(char *dest, char *src)
{
	int c, c2;
	int c = 0;

	while (dest[c])
		c++;
	for (c2 = 0; src[c2] ; C2++)
		dest[c++] = src[c2];
	return (dest);
}

