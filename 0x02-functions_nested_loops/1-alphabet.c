#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase
 *
 * Return: return nothing
 */

void print_alphabet(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		_putchar(alph);
	}
	_putchar('\n');
}
