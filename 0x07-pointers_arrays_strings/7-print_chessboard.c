#include "main.h"

/**
 * print_chessboard - a function that prints the chessboard
 *
 * @a: matrix to be tested
 *
 */
void print_chessboard(char (*a)[8])
{
	int w, b;

	for (w = 0; w < 8; w++)
	{
		for (b = 0; b < 8; b++)
		{
			putchar(a[w][b]);
		}
		putchar('\n');
	}
}
