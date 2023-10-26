#include "main.h"

/**
* set_bit - converts the bit in @n in position @index to 1
* @index: index to be tested
* @n: integer to be tested
*
* Return: 1 if it worked, or -1 if an error occurred
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	if ((index >= sizeof(long) * 8))
	{
		return (-1);
	}
	*n |= 1UL << index;
	return (1);
}
