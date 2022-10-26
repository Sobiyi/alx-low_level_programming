#include <string.h>
#include "main.h"

/**
 * _strcat - concantenates two strings
 * @dest: the first string
 * @src: the second string
 *
 * Return: a pointer to the resulting dest string
 */
char *_strcat(char *dest, char *src)
{
	char *val = strcat(dest, src);

	return (val);
}
