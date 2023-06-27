#include "main.h"
/**
 * swap_int:swap the value of two integars,
 * using two inputs paramaters.
 * @a: input paramaters 1
 * @b: input paramaters 2
 *
 * return nothing
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
