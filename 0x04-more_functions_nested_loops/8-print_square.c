#include "main.h"

/**
 * print_square - prints a square
 * @size: size of the square
 * Return: 0
 */

void print_square(int size)
{
	int rows, colu;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (colu = 1; colu <= size; colu++)
		{
			for (rows = 1; rows <= size; rows++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
