#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: array
 * @n: number of the elements
 * Return: 0
 */

void reverse_array(int *a, int n)
{
	int b = 0;
	int c = 0;
	int *temp, *d;
	int e = 0;

	temp = a;
	d = a;
	n--;

	while (b < n)
	{
		b++;
	}
	while (c <= b)
	{
		e = temp[c];
		temp[c] = d[b];
		d[b] = e;
		c++;
		b--;
	}
}
