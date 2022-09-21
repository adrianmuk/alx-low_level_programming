#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string
 * Return: 0 if no numbers in the string,
 */

int _atoi(char *s)
{
	int c = 0;
	int n = 0;
	int a = 1;

	while ((s[c] < '0' || s[c] > '9') && s[c] != 0)
	{
		if (s[c] == '-')
		{
			a *= -1;
		}
		c++;
	}
	while ((s[c] >= '0' && s[c] <= '9') && s[c] != 0)
	{
		if (n >= 0)
		{
			n = n * 10 - (s[c] - '0');
			c++;
		}
		else
		{
			n = n * 10 - (s[c] - '0');
			c++;
		}
	}
	a *= -1;
	return (n * a);
}
