#include "main.h"

/**
 * prime_number - a function that check prime number
 *
 * @n: integer to be tested
 *
 * @num2: integer to be tested
 *
 * Return: true or false
 */
int prime_number(int n, int num2)
{
	if (n == num2)
	{
		return (1);
	}
	if (n % num2 == 0)
	{
		return (0);
	}
	else if (n <= 1)
	{
		return (0);
	}
	return (prime_number(n, num2 + 1));
}

/**
 * is_prime_number - a function that check prime number
 *
 * @n: integer to be tested
 *
 * Return: true or false
 */
int is_prime_number(int n)
{
	return (prime_number(n, 2));
}
