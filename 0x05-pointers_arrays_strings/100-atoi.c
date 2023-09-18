#include "main.h"
/**
 * _atoi - function that converts a string to an integer
 *
 * @s: string to be tested
 *
 * Return: n * sign
 */
int _atoi(char *s)
{
	int sign, l;
	unsigned int n;

	n = 0;
	sign = 1;

	for (; *s; *s++)
	{
		if (*s == 45)
		{
			sign = sign * -1;
		}
		else if (*s >= 48 && *s <= 57)
		{
			num = (num * 10) + (*s - 48);
		else if (num > 0)
		{
			break;
		}
	}
	return (n * sign);
}
