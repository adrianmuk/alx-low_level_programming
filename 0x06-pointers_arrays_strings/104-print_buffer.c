#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints a buffer
 * @b: buffer
 * @size: buffer size
 * Return: 0
 */

void print_buffer(char *b, int size)
{
	int byte, ind;

	for (byte = 0; byte < size; byte += 10)
	{
		printf("%08x: ", byte);
		for (ind = 0; ind < 10; ind++)
		{
			if ((ind + byte) >= size)
				printf("  ");
			else
				printf("%02x", *(b + ind + byte));

			if ((ind % 2) != 0 && ind != 0)
				printf(" ");
		}
		for (ind = 0; ind < 10; ind++)
		{
			if ((ind + byte) >= size)
				break;
			else if (*(b + ind + byte) >= 31 &&
					*(b + ind + byte) <= 126)
			{
				printf("%c", *(b + ind + byte));
			}
			else
				printf(".");
		}
		if (byte >= size)
			continue;

		printf("\n");
	}
	if (size <= 0)
		printf("\n");
}
