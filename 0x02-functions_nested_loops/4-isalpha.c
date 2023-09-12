#include "main.h"
/**
 * _isalpha - function that checks for alphabetic character
 * @c : its the alphabet to be tested
 * Return: 1 if c is a letter, lowercase or uppercase
 */

int _isalpha(int c)
{
	if ((c >= 'a' &&  c <= 'z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
