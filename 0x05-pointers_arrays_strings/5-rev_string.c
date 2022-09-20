#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string
 * Return: 0
 */

void rev_string(char *s)
{
	int i = 0;
	int a = 0;
	char l;

	while (*(s + i) != '\0')
	{
		i++;
	}
	i--;

	while (a < i)
	{
		l = *(s + i);
		*(s + i) = *(s + a);
		*(s + a) = l;
		a++;
		i--;
	}
}
