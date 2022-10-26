#include <string.h>
#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: the first string
 * @src: the second string
 * @n: the byte number
 *
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *val = strncat(dest, src, n);

	return (val);
}
