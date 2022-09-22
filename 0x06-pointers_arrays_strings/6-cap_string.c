#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @s: string
 * Return: 0
 */

char *cap_string(char *s)
{
	int a = 0;

	while (s[a] != '\0')
	{
		if (a == 0 && s[a] >= 97 && s[a] <= 122)
		{
			s[a] = s[a] - ' ';
			a++;
		}
		if (s[a] == ' ' || s[a] == '\n' || s[a] == '\t'	|| s[a] == ',' ||
				s[a] == ';' || s[a] == '!' || s[a] == '?' ||
				s[a] == '"' || s[a] == '(' || s[a] == ')' ||
				s[a] == '{' || s[a] == '}' || s[a] == '.')
		{
			a++;
			if (s[a] >= 97 && s[a] <= 122)
			{
				s[a] = s[a] - ' ';
			}
		}
		else
		{
			a++;
		}
	}
	return (s);
}
