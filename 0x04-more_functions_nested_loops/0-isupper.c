#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: character checked
 * Return: 1 for succes and 0 if otherwise
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90 )
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
