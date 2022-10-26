#include <string.h>
#include "main.h"

/**
 * string_toupper - converts all lowercase characters to upper
 * @str: the pointer to the string
 *
 * Return: pointer to the conerted string
 */
char *string_toupper(char *str)
{
	int i, len;

	len = strlen(str);

	for (i = 0; i < len; i++)
	{
		if (str[i] >= 'a' && <= 'z')
		{
			str[i] -= 32;
		}
	}

	return (str);
}
