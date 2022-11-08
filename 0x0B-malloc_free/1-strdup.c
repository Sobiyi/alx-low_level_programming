#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space that contains
 * a copy of a string
 * @str: the string
 *
 * Return: NULL if the string is NULL or if not enough space availabe and
 * a pointer to the new duplicate otherwise
 */
char *_strdup(char *str)
{
	int len, i;
	char *p;

	if (str == NULL)
		return (NULL);

	len = strlen(str);
	p = malloc((len + 1) * sizeof(char));

	if (p == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		p[i] = str[i];

	p[len] = '\0';

	return (p);
}
