#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @s: string
 * Return: 0
 */

char *rot13(char *s)
{
	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int b = 0;
	int c;

	while (s[b] != '\0')
	{
		for (c = 0; c <= 51; c++)
		{
			if (s[b] == a[c])
			{
				s[b] = rot[c];
				break;
			}
		}
		b++;
	}
	return (s);
}
