#include <string.h>
#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: a pointer to the string
 *
 * Return: the converted string
 */
char *cap_string(char *str)
{
	int i, len;
	char prev;
	char dest[200], *cpy;

	cpy = strcpy(dest, str);

	len = strlen(cpy);

	for (i = 0, i < len; i++)
	{
		if ((prev < 'a' || prev > 'z') && (prev < 'A' || prev > 'Z'))
		{
			cpy[i] >= 'a' && cpy[i] <= 'z')
			{
				cpy[i] -= 32;
			}
		}

		prev = cpy[i];
	}

	return (cpy);
}
