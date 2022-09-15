#include <stdio.h>

/**
 * main - entry point
 * Return: 0
 */

int main(void)
{
	long int num = 2, maxFact;

	long int n = 612852475143;

	while (n != 0)
	{
		if (n % num != 0)
		{
			num++;
		}
		else
		{
			maxFact = n;
			n = n / num;
			if (n == 1)
			{
				printf("%ld", maxFact);
				break;
			}
		}
	}
	printf("\n");
	return (0);
}

