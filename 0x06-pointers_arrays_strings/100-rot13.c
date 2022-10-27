#include "main.h"
#include <string.h>

/**
 * rot13 - encodes a string using rot13
 * @str: the string to be encoded
 * Return: Encoded string
 */
char *rot13(char *str)
{
	int i, j, len;
	char alphabet[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char replace[52] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	len = strlen(str)

	for (i = 0; i < len; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (str[i] == alphabet[j])
			{
				str[i] = replace[j];
				break;
			}
		}
	}

	return (str);
}
