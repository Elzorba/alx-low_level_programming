#include "main.h"

/**
 * _memset - Write a function that fills memory with a constant byte
 * @s : pointer 
 * @b : character
 * @n : unsigned int
 *
 * return : pointer s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int ptr;

	for (ptr = 0; n > 0; ptr++; n--)
	{
		s[ptr] = b;
	}
	return (s);
}
