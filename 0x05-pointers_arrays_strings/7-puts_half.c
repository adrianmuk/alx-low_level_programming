#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: string
 * Return: 0
 */

void puts_half(char *str)
{
	int i = 0;
	int c = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	c = i / 2;

	/**
	if (i % 2 == 1)
	{
		c++;
	}
	*/
	while (str[c] != '\0')
	{
		_putchar(str[c]);
		c++;
	}
	_putchar('\n');
}

