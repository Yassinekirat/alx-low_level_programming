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
	int sign;
	unsigned int n;
	int i;

	n = 0;
	sign = 1;

	for (i = 0; *s[i]; *s++)
	{
		if (*s[i] == 45)
		{
			sign = sign * -1;
		}
		else if (*s[i] >= 48 && *s[i] <= 57)
		{
			n = (n * 10) + (*s[i] - 48);
		else if (n > 0)
		{
			break;
		}
	}
	return (n * sign);
}
