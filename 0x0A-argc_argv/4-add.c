#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that adds positive numbers.
 * @argc: The size of the argv array
 * @argv: An array containing the program command line arguments
 *
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i, add;
	char *c;

	add = 0;
	if (argc >= 2)
	{
		for (i = 1; i < argc; i++)
		{
			c = argv[i];
			for (; *c != 0; c++)
			{
				if (*c > '9' || *c < '0')
				{
					printf("Error\n");
					return (1);
				}
			}
			add = add + atoi(argv[i]);
		}
		printf("%d\n", add);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
