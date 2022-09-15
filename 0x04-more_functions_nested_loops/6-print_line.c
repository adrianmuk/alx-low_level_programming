#include "main.h"

/**
 * print_line - draws a straight line 
 * @n: length of the line
 * Return: 0
 */

void print_line(int n)
{
	int num; 

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (num = 1; num <= n; num++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
