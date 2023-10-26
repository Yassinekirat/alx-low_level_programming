#include "main.h"

/**
* flip_bits - function that returns the number of bits
* you would need to flip to get from one number to another
*
* @n: unsigned long int 1
* @m: unsigned long int 2
*
* Return: Always Successful
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int exclusive = n ^ m, num;

	num = 0;
	while (exclusive > 0)
	{
		num = num + (exclusive & 1);
		exclusive >>= 1;
	}

	return (num);
}
