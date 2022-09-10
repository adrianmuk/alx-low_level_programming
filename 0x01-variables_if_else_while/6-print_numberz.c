#include <stdio.h>

/**
 *main - program that prints all single digit numbers of base 10 starting from
 *0 followed by a new line
 *Return: 0 for success
 */

int main(void)
{
	int n = 48;

	while (n <= 57)
	{
		putchar(n);
		n += 1;
	}
	write("\n", 2);
	return (0);
}
