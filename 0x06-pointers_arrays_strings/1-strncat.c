#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: string
 * @src: string
 * @n: int
 * Return: 0
 */

char *_strncat(char *dest, char *src, int n)
{
	int a = 0;
	int c = 0;

	while (dest[a] != '\0')
	{
		a++;
	}
	while (src[c] != '\0')
	{
		if (c < n)
		{
			dest[a] = src[c];
			a++;
		}
		c++;
	}
	return (dest);
}
