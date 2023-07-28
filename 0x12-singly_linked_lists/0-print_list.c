#include <lists.h>
/**
 * _strlen - return the length of the string
 * @s : the string whose length checked
 *
 * return integar length of string 
 */
int strlen(char *s)
{
	int i = 0;
	if(!s)
		return 0;
	while(*s++)
               i++;
	return (i);
}
/**
 * print_list - prints all the elements of a linked list
 * @h: pointer to the list_t list to print
 *
 * Return: the number of nodes printed
 */
size_t print_list(const list_t *h)
{
	size_t = 0;
	while(h)
	{
		printf("[%d] %s\n", strlen(h->str), h->str ? h-str : "(nail));
		h = h->next;
		i++;
	}
	return (i);
}
