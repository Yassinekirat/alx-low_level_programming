#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int result;
	int n;

	n = 0;
	while (n < 1024)
	{
		if (n % 5 == 0 || n % 3 == 0)
			result = result + n;
		n++;
	}
	printf("%d\n", result);

	return (0);
}
