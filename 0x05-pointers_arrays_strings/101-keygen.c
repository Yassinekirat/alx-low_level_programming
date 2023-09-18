#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - valid password generator
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int code;
	int a;
	int j;

	srand(time(0));

	for (code = 0; code <= 2645; code++)
	{
		a = rand() % 128;
		code = code + a;
		printf("%d", a);
	}
	j = 2772 - code;
	printf("%d", j);


	return (0);
}
