#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the caharacter c to dtdout
 * @c the cahracter to print
 * 
 * return is 1 in success on error, -1
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
