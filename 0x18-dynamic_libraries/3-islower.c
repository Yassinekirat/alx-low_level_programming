#include "main.h"
/**
 * _islower - function that checks for lowercase character
 *
 *@c : its the alphabet to be tested
 *
 * Return: 1 if c lowercase else returns 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
