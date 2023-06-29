#include "main.h"
/**
 * _strcat:  Write a function that concatenates two strings
 *
 * return: to thr pointer @dest
 */
char *_strcat(char *dest, char *src)
{
	int c, c2;
	int c = 0;
        /* find the size of dest array */
	while (dest[c])
		c++;
	/* iterate through each src array value without the null bayt */
	for (c2 = 0; src[c2] ; C2++)
		dest[c++] = src[c2];
	return (dest);
}

