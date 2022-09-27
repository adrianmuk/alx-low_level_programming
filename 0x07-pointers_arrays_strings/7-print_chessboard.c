#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: chess board
 * Return: nothing
 */

void print_chessboard(char (*a)[8])
{
	int b, i;

	for (b = 0; a[b][7]; b++)
	{
		for (i = 0; i < 8; i++)
		{
			_putchar(a[b][i]);
		}
		_putchar('\n');
	}
}
