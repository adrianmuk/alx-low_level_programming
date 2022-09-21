#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - random password generator for 101-crackme
 * Return: always 0
 */

int main(void)
{
	int a, b, d, e;
	char c[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char f[58];

	srand(time(NULL));

	while (e != 2772)
	{
		a = d = e = 0;
		while ((2772 - 122) > e)
		{
			b = rand() % 62;
			f[a] = c[b];
			e += c[b];
			a++;
		}
		while (c[d])
		{
			if (c[d] == (2772 - e))
			{
				f[a] = c[d];
				e += c[d];
				a++;
				break;
			}
			d++;
		}
	}
	f[a] = '\0';
	printf("%s", f);
	return (0);
}
