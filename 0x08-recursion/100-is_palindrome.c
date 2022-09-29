#include "main.h"

/**
 * get_palindrome - checks if number is a palindrome
 * @s: number
 * @length: length of the number
 * Return: 1 if s is a palindrome and 0 if not
 */
int get_palindrome(char *s, int length)
{
	if (*s != s[length - 1])
		return (0);
	else if (*s == '\0')
		return (1);
	return (get_palindrome(s + 1, length - 2));
}

/**
 * _strlen_recursion - returns the length of a string
 * @s: string
 * Return: 0
 */

int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		len += _strlen_recursion(s + 1);
	}

	return (len);

}

/**
 * is_palindrome - checks if a number is a palindrome
 * @s: string
 * Return: 1 if s is a palindrome and 0 if not
 */

int is_palindrome(char *s)
{
	int length;

	length = _strlen_recursion(s);

	if (length <= 1)
		return (1);
	return (get_palindrome(s, length));
}
