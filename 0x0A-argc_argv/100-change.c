#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that that prints the minimum number of coins
 * to make change for an amount of money
 * @argc: The size of the argv array
 * @argv: An array containing the program command line arguments
 *
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	int n, res;

	if (argc != 2)
	{
		printf("Error\n")
		return (1);
	}
	n = atoi(argv[1]);
	if (n < 0)
	{
		printf("0\n");
		return (0);
	}
	res = 0;
	while (n >= 0)
	{
		switch (n)
		{
			case 25:
				n = n - 25;
				break;
			case 10:
				n = n - 10;
				break;
			case 5:
				n = n - 5;
				break;
			case 2:
				n = n - 2;
				break;
			case 1:
				n = n - 1;
				break;
			default:
				break
		}
		res++
	}
	printf("%d\n", res);
	return (0);
}
