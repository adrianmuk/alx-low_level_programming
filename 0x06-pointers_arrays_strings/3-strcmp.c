#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: string one
 * @s2: string two
 * Return: 0
 */

int _strcmp(char *s1, char *s2)
{
	int a = 0;
	int c;

	while (s1[a] != '\0')
	{
		if (s1[a] > s2[a])
		{
			c = s1[a] - s2[a];
			return (c);
		}
		else if (s1[a] < s2[a])
		{
			c = s1[a] - s2[a];
			return (c);
		}
		a++;
	}
	return (0);
}
