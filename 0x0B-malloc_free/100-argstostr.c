#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of the program
 * @ac: number of arguments
 * @av: array of arguments
 * Return: NULL if ac == 0 or av == NULL else pointer to a new string
 */

char *argstostr(int ac, char **av)
{
	int ch = 0, i = 0, j = 0, k = 0;
	char *l;

	if (ac == 0 || av == NULL)
		return (NULL);

	while (i < ac)
	{
		while (av[i][j])
		{
			ch++;
			j++;
		}

		j = 0;
		i++;
	}

	l = malloc((sizeof(char) * ch) + ac + 1);
	i = 0;

	while (av[i])
	{
		while (av[i][j])
		{
			l[k] = av[i][j];
			k++;
			j++;
		}

		l[k] = '\n';
		j = 0;
		k++;
		i++;
	}

	k++;
	l[k] = '\0';
	return (l);
}
