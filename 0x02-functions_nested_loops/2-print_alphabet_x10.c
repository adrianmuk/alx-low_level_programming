#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet 10 times in lowercase
 *
 * return: nothing
 */

void print_alphabet_x10(void)
{
	int alph;
	int alph2;

	for (alph = 0; alph <= 9; alph++)
	{
		for (alph2 = 'a'; alph2 <= 'z'; alph2++)
		{
			_putchar(alph2);
		}
		_putchar('\n');
	}
}
