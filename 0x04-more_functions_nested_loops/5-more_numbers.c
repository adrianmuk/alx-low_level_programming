#include "main.h"

/**
 * more_numbers - prints numbers from 0 to 14 10 times
 * Return: 0
 */

void more_numbers(void)
{
	int x, y, tens, units;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y <= 14; y++)
		{
			tens = y / 10;
			units = y % 10;

			if (y > 9)
			{
				_putchar(tens + '0');
			}
			_putchar(units + '0');
		}
		_putchar('\n');
	}
}
