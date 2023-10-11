#include "3-calc.h"

/**
 * main - function that perform like a simple calculator
 * @argc: The size of argv
 * @argv: An array containing the program command line arguments
 * Return: The result
*/
int main(int argc, char *argv[])
{
	char *p;
	int (*op)(int, int) = NULL;
	int a, b;
	int res;

	a = atoi(argv[1]);
	p = argv[2];
	b = atoi(argv[3]);
	op = get_op_func(argv[2]);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (op == NULL || p[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((*p == '/' || *p == '%') && b == 0)
	{
		printf("Error\n");
		return (100);
	}
	res = op(a, b);
	printf("%d\n", res);

	return (0);
}
