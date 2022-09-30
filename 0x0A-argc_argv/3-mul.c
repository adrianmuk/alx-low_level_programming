#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies 2 numbers
 * @argv: array of args
 * @argc: number of args
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int product, a, b;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		product = a * b;
		printf("%d\n", product);
	}
	return (0);
}
