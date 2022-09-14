#include "main.h"

/**
 * _abs - prints the absolute value of an integer
 * @n: value whose absolute value is printed
 * Return: 0 for success
 */

int _abs(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
	return (0);
}
