#include "main.h"
#include <stdio.h>

/**
 * main - program that prints all arguments it receives
 * @argc: The size of the argv array
 * @argv: An array containing the program command line arguments
 *
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
