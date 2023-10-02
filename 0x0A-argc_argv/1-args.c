#include "main.h"
#include <stdio.h>

/**
 * main - program that prints the number of arguments passed into it
 * @argc: The size of the argv array
 * @argv: An array containing the program command line arguments
 *
 * Return: 0 (Success)
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	int i;

	i = argc - 1;
	printf("%d\n", i);
	return (0);
}
