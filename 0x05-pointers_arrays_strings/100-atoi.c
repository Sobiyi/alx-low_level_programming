#include <ctype.h>
#include <string.h>
#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: the pointer to the string
 *
 * Return: the integer
 */
int _atoi(char *s)
{
	int i, sign, len;
	unsigned int val;

	len = strlen(s);
	sign = 1;
	val = 0;

	for (i = 0; i < len; i++)
	{
		if (val > 0)
		{
			if (isdigit(s[i]) == 0)
			{
				break;
			}
		}
		if (s[i] == '-')
		{
			sign = sign * -1;
		}
		if (s[i] >= '0' && s[i] <= '9')
		{
			val = val * 10 + s[i] - '0';
		}
	}

	return (val * sign);
}
