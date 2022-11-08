#include "main.h"

/**
 * argstostr - concatenates all arguments of a program
 * @ac: number of arguments
 * @av: array of arguments
 *
 * Return: pointer to the string or NULL if there is error
 */
char *argstostr(int ac, char **av)
{
	int i, j, c, len, size;
	char *s;

	c = 0;
	size = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (I = 0; i < ac; i++)
	{
		size += strlen(av[i]);
	}

	s = malloc((size * sizeof(char)) + ac + 1);
	if (s == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		len = strlen(av[i]);
		for (j = 0; j < len; j++)
		{
			s[c] = av[i][j];
			c++;

		}
		s[c] = '\n';
		c++;
	}

	s[c] = '\0';

	return (s);
}

