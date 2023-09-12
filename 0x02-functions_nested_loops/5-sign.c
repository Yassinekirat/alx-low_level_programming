#include "main.h"
/**
 * print_sign - function that checks for alphabetic character
 * @n : its the integer to be tested
 * Return: 1 if greater than zero, 0 if zero,-1 if less than zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar ('+');
		return (1);
	}
	else if (n == '0')
	{
		_putchar ('0');
		return (0);
	}
	else
	{
		putchar ('-');
		return (-1);
	}
}