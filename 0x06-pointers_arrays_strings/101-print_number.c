#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer
 * Return: 0
 */

void print_number(int n)
{
	int a, b, digit, digits, power;
	unsigned int temp, num, number;

	digit = 0;

	if (n < 0)
	{
		_putchar('-');
		temp = -n;
	}
	else
	{
		temp = n;
	}

	number = temp;

	while (number >= 10)
	{
		number = number / 10;
		digit++;
	}
	digits = digit + 1;
	power = 1;
	a = 1;

	while (a < digits)
	{
		power = power * 10;
		a++;
	}
	b = power;
	while (b >= 1)
	{
		num = (temp / b) % 10;
		_putchar(num + '0');
		b = b / 10;
	}
}
