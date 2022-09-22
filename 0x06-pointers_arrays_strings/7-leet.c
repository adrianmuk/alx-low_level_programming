#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: string
 * Return: 0
 */

char *leet(char *s)
{
	int a = 0;
	int b = 0;
	char *c = "aAeEoOlLtT";
	char *d = "4433001177";

	while (s[a] != '\0')
	{
		while (c[b] != '\0')
		{
			if (s[a] == c[b])
			{
				s[a] = d[b];
			}
			b++;
		}
		b = 0;
		a++;
	}
	return (s);
}
