#include "main.h"

/**
 *  swap_int - function that swaps two integers
 *
 *  @a: integer type pointer
 *
 *  @b: integer type pointer
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;

	*a = *b;

	*b = c;
}
