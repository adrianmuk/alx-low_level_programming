#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: string one
 * @src: string 2
 * Return: 0
 */

char *_strcat(char *dest, char *src)
{
	int a = 0;
	int c = 0;

	while (dest[a] != '\0')
	{
		a++;
	}
	while (src[c] != '\0')
	{
		dest[a] = src[c];
		a++;
		c++;
	}
	return (dest);
}
