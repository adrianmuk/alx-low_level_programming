#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: smallest value in the array
 * @max: largest value in the array
 * Return: pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *p;
	int i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	p = malloc(sizeof(int) * size);

	if (p == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		p[i] = min++;

	return (p);
}
