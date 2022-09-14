#include "main.h"

/**
 * _islower - checks for lowercase character
 * @c: letter in ASCII being tested
 * Return: 1 for success and 0 if otherwise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
