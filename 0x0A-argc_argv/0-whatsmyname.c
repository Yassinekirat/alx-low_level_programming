#include "main.h"
#include <stdio.h>

/**
 * main - program that prints its name
 * @argc: The size of the argv array
 * @argv: An array containing the program command line arguments
 *
 * Return: 0 (Success)
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
