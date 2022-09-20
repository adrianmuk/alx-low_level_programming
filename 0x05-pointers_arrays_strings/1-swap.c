#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: pointer to integer
 * @b: pointer to integer
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a  = *b;
	*b = c;
}
