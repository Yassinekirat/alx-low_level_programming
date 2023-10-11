#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its own main function.
 *
 * @argc: The size of argv
 * @argv: An array containing the program command line arguments
 *
 * Return: 0 (successful)
 */
int main(int argc, char *argv[])
{
	int count, i;
	char *bytes = (char *)main;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	count = atoi(argv[1]);

	if (count < 0)
	{
		printf("Error\n");
		return (2);
	}


	for (i = 0; i < count; i++)
	{
		if (i == count - 1)
		{
			printf("%02hhx\n", bytes[i]);
		}
		else
		{
		printf("%02hhx", bytes[i]);
		putchar(' ');
		}
	}


	return (0);
}
