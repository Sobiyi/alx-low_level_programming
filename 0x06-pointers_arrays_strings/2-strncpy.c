#include <string.h>
#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: the string to be copied into
 * @src: the string to be copied
 * @n: the number of bytes
 *
 * Return: a pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *val = strncpy(dest, src, n);

	return (val);
}
