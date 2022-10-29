#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: string of 0 and 1 chars
 * Return: the converted number, or 0 if there is one or more
 * chars in the string b that is not 0 or 1 and b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int total, i;

	if (b == NULL)
		return (0);
	total = 0;
	for (i = 0; *(b + i); i++)
	{
		total = total << 1;
		if (*(b + i) == '1')
			total = total | 1;
		else if (*(b + i) != '0')
			return (0);
	}
	return (total);
}
