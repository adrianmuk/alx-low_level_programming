#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: value being checked
 * Return: 1 for success and 0 if otherwise
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
