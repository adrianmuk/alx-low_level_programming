#include "main.h"

/**
 * submatch - check if a substrings after wildcard match
 * @s1: string
 * @s2: string
 * @after: after wildcard
 * Return: 1 if matched, 0 if not
 */

int submatch(char *s1, char *s2, char *after)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s1 == '\0' && *s2 == '*')
		return (submatch(s1, s2 + 1, s2 + 1));
	if (*s1 == '\0' && *s2 != '\0')
		return (0);
	if (*s2 == '*')
		return (submatch(s1, s2 + 1, s2 + 1));
	if (*s1 == *s2)
		return (submatch(s1 + 1, s2 + 1, after));
	else
		return (submatch(s1 + 1, after, after));
}

/**
 * wildcmp - compares s1 and s2
 * @s1: string
 * @s2: string
 * Return: 1 if strings can be considered identical and 0 if otherwise
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	else if (*s2 == '*')
		return (submatch(s1, (s2 + 1), (s2 + 1)));
	else
		return (0);
}
