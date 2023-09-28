#include "main.h"

/**
 * factorial - a function that printf string in reverse
 *
 * @n: integer to be tested
 *
 * Return: factorial
 */
int factorial(int n)
{
	int f;

	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	f = n * factorial(n - 1);
	return (f);
}
