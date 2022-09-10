#include <stdio.h>
#include <ctype.h>

/**
 * main - program that prints the alphabet in lowercase, followed by a new line
 * You can only use the putchar
 * Return: 0 for success
 */

int main(void)
{
	int l = 'a';

	while (l <= 'z')
	{
		putchar(l);
		l++;
	}
	putchar('\n');
	return (0);
}
