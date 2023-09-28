#include "main.h"

/**
 * _pow_recursion - a function that printf value of x raised to the power of y.
 *
 * @x: integer to be tested
 *
 * @y: interger to be tested
 *
 * Return: power
 */
int _pow_recursion(int x, int y)
{
	int p;

	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	p = x * _pow_recursion(x, y - 1);
	return (p);
}
