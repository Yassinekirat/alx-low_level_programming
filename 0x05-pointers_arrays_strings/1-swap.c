#include "main.h"

/**
 * swap_int - swaps value of integers
 * @a: first to be tested
 * @b: second to be tested
 *
 */

void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
