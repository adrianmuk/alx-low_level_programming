#include <stdio.h>

/**
 *main - program that prints all single digit numbers of base 10 starting from
 *0 followed by a new line
 *Return: 0 for success
 */

int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchr((num % 10) + '0');
	putchar("\n");
	return (0);
}
