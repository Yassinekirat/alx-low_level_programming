#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - function that concatenates all
 * the arguments of your program
 * @ac: counter
 * @av: pointer
 * Return:  pointer or Null on failure
 */
char *argstostr(int ac, char **av)
{
	char *a;
	int x, y, c, b;

	if (av == NULL || ac == 0)
	{
		return (NULL);
	}
	y = 0;
	for (c = 0; c < ac; c++)
	{
		for (b = 0; av[c][b]; b++)
		{
			y++;
		}
		y++;
	}
	a = malloc(sizeof(char) * (y + 1));
	if (a == NULL)
	{
		return (NULL);
	}
	x = 0;
	for (c = 0; c < ac; c++)
	{
		for (b = 0; av[c][b]; b++)
		{
			a[x] = av[c][b];
			x++;
		}
		a[x] = '\n';
		x++;
	}
	a[x] = '\0';

	return (a);
}
