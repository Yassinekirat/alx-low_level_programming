#include "main.h"

/**
 * square_root - a function that printf  the natural square root of a number
 *
 * @n: integer to be tested
 *
 * @num2: integer to be tested
 *
 * Return: squar root
 */
int square_root(int n, int num2)
{
	if (num2 * num2 > n)
	{
		return (-1);
	}
	if (num2 * num2 == n)
	{
		return (num2);
	}
	return (square_root(n, num2 + 1));
}




/**
 * _sqrt_recursion - a function that printf the natural square root of a number
 *
 * @n: integer to be tested
 *
 * Return: squar root
 */
int _sqrt_recursion(int n)
{
	return (square_root(n, 1));
}
