#include <unistd.h>
#include <main.h>
/**
 * _putchar wrights the character c to stdout &c the character to print 
 *
 * return : on succes 1.
 * on error , -1 is returned , and errno is set appropriately
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}

