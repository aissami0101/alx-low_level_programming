#include "main.h"

/**
 * swap_int -  swaps the values of two integers.
 * @a: sorted the addres of an int.
 * @b: sorted the addres of another in.
 */

void swap_int(int *a, int *b)
{
	int swp;

	swp = *a;
	*a = *b;
	*b = swp;
}
