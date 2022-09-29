#include "main.h"

/**
 * tester - checks if the square of the base is either equal to the number or
 * less
 * @n: number
 * @base: possible square root
 * Return: natural square root of n
 */
int tester(int n, int base)
{
	if (base * base == n)
	{
		return (base);
	}
	if (base * base > n)
	{
		return (-1);
	}
	return (tester(n, base + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number
 * Return: -1 if n doesnot have a natural square root
 */
int _sqrt_recursion(int n)
{
	return (tester(n, 1));
}
