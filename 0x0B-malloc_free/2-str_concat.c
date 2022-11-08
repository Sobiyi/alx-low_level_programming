#include "main.h"

/**
 * str_concat - concatenates 2 strings
 * @s1: first string
 * @s2: second string
 *
 * Return: NULL on error and pointer to new string otherwise
 */
char *str_concat(char *s1, char *s2)
{
	int i, len1, len2, lenp;
	char *p;

	if (s1 == NULL)
		len1 = 0;
	else
		len1 = strlen(s1);

	if (s2 == NULL)
		len2 = 0;
	else
		len2 = strlen(s2);

	p = malloc((len1 + len2 + 1) * sizeof(char));

	if (p == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		p[i] = s1[i];
	for (i = 0; i < len2; i++)
		p[i + len1] = s2[i];

	lenp = strlen(p);
	p[lenp] = '\0';

	return (p);
}
