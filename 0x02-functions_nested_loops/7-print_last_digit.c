#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n : its the integer to be tested
 * Return: the value of the last digit
 */
int print_last_digit(int n)
{
	int i;

	i = n % 10;
	if (n < 0)
	{
		n = n * -1;
	}
	return (i + '0');
}
