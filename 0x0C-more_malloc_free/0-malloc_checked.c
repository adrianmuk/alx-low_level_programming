#include "main.h"
#include <stdlib.h>	

/**
 * malloc_checked - allocates memory using malloc
 * @b: space to allocate
 * Return: pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *al;

	al = malloc(b);

	if (al == NULL)
		exit(98);
	else
		return (al);
}
