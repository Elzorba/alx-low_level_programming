#include <unistd.h>
/**
 * Main : entry point
 *
 * Description : creating a text using wright function
 *
 * Return : 1 (Error)
*/

int main(void)
{   char quo[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(1, quo, 59);

	return (1);
}
