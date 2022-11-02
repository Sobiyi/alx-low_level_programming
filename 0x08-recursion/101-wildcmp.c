#include "main.h"
#include <string.h>

/**
 * find_last_index - finds the last index of a charcter in a string
 * @s: a pointer to the string
 * @c: the character to search for
 * @st: where to start search
 *
 * Return: 0 if c is *, 1 if c is found and -1 otherwise
 */
int find_last_index(char *s, char c, int st)
{
	if (c == '*')
		return (0);
	else if (s[st] == c)
		return (st + 1);
	else if (s[st] == '\0')
		return (-1);
	else
		return (find_last_index(s, c, st + 1));
}

/**
 * wildcmp - compares two strings with wildcard *
 * @s1: a pointer to the first string
 * @s2: a pointer to the second string
 *
 * Return: 1 if strings are identical and 0 if not
 */
int wildcmp(char *s1, char *s2)
{
	int r;

	if (s1[0] == '\0' && s2[0] == '\0')
	{
		return (1);
	}
	else if (s2[0] == '*')
	{
		if (s2[1] == '\0')
			return (1);

		r = find_last_index(s1, s2[1], 0);

		if (r == -1)
		{
			return (0);
		}
		else if (r == 0)
		{
			return (wildcmp(s1, &s2[1]));
		}
		else
		{
			return (wildcmp(&s1[r], &s2[2]));
		}
	}
	else if (s1[0] != s2[0])
	{
		return (0);
	}
	else
	{
		return (wildcmp(&s1[1], &s2[1]));
	}
		return (0);
}
