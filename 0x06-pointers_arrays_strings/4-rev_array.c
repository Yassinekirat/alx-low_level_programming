#include "main.h"

/**
 * reverse_array - reverse array
 *
 * @a: string to be tested
 *
 * @n: num of elements
 *
 */
void reverse_array(int *a, int n)
{
	int r, s;

	for (r = 0; r < n; r++)
	{
		n--;
		s = a[r];
		a[r] = a[n];
		a[n] = s;
	}
}
