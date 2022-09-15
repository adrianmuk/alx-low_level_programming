#include "main.h"
#include <stdio.h>

/**
 * positive_or_negative - checks whether a nymber is positive or negative
 * @i: integer
 * Return: 0
 */

void positive_or_negative(int i)
{
	if (i < 0)
	{
		printf("%d is negative", i);
	}
	else if (i > 0)
	{
		printf("%d is positive", i);
	}
	else
	{
		printf("%d is zero", i);
	}
}

