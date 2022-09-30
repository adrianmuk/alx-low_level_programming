#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins for an amount of money
 * @argc: argument count
 * @argv: argument array
 * Return: least number of coins, 0 if negative amount, 1 if amount not given
 */

int main(int argc, char *argv[])
{
	int i, coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	if (argv[1][0] == '-')
	{
		printf("0\n");
		return (0);
	}

	i = atoi(argv[1]);
	coins += i / 25;
	i = i % 25;
	coins += i / 10;
	i = i % 10;
	coins += i / 5;
	i = i % 5;
	coins += i / 2;
	i = i % 2;
	coins += i;

	printf("%d\n", coins);
	return (0);
}
