#include "main.h"
/**
 * _strlen: return the length of string
 *
 * @s:the sting paramater input
 *
 * return: the lenght of string
 */
int _strlen(char *s)
{
	int counter;
        for (counter = 0; *s != '\0'; s++)

	++counter;

	return (counter);
}
