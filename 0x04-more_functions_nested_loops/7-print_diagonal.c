#include "main.h"
/**
 * print_diagonal - draws a diagonal line
 * @n: number of time \ is printed
 * Return: 0
 */
void print_diagonal(int n)
{
	int i, c;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			if (i > 1)
			{
				for (c = 1; c <= i - 1; c++)
				{
					_putchar(' ');
				}
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
